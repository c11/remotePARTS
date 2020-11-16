#include "function-declarations.hpp"

//' Invert the cholesky decomposition of V
//'
//' @param V numeric matrix
//' @param nugget numeric nugget to add to variance matrix
//'
//' @examples #TBA
// [[Rcpp::export(.invchol_cpp)]]
MatrixXd invchol_cpp(const MapMatd& V, double nugget = 0.){

  double n = V.rows(); //dim of V

  if (abs(nugget) > 0) {
    // with nugget
    const MatrixXd M = (1 - nugget) * V.array() + nugget * MatrixXd::Identity(n,n).array();
    const MatrixXd Mn = M.matrix();
    const LLT<MatrixXd> llt(Mn);
    const MatrixXd Linv = llt.matrixL().solve(MatrixXd::Identity(n, n));
    return Linv;
  } else {
    // no nugget case
    const LLT<MatrixXd> llt(V); //chol decomp of V: (U)
    const MatrixXd Linv = llt.matrixL().solve(MatrixXd::Identity(n, n));
    return Linv;
  }
}