// RUN: %libarcher-compile-and-run
#include <omp.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
  int var = 0;

  #pragma omp parallel num_threads(2) firstprivate(var)
  {
    var = 1;
  }

  // var should still be 0!
  return var;
}
