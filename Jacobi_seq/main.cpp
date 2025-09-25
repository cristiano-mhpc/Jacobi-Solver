#include <vector>
#include <iostream>
#include <fstream>
#include "CMesh.hpp"
#include "BoundCond.hpp"
#include "CSolver.hpp"

int main(){
  CMesh<double> data(11, boundary_cond<double>);
  CSolver<double> solver; 

  solver.jacobi(data, 100, 25);

}
