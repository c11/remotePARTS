Description
-----------

`remoteSTAR` is currently in early development. Organization is less
than ideal, official unit tests are not present, and C++ code has
occasionally exhibited bugs (especially those used for the partitioned
analyses - avoid them for now).

This package is not stable, consider it a beta. Please report any
comments or bugs either directly to me `morrow5@wisc.edu` or through
github:
<a href="https://github.com/morrowcj/remoteSTAR" class="uri">https://github.com/morrowcj/remoteSTAR</a>
(it is a private repo so please send me a github username and I’ll add
you to the repo).

Installation
------------

Currently to install this package, the best way is to install with the
`remoteSTAR_[version].tar.gz` file created with `R CMD check`.

Once a user has the tar.gz file they can install it with

    install.packages("../remoteSTAR_[version].tar.gz", repos = NULL, type = "source")

and then load it with

    library(remoteSTAR)

from the R console.

Example usage
-------------

For examples on how to use `remoteSTAR` in it’s current state, see the
`Alaska` vignette by using the following R code:

    vignette(remoteSTAR)