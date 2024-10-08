// C++ includes
#include <iostream>
// Eigen includes
#include <ArduinoEigenDense.h>
// autodiff include
#include <autodiff_reverse.h>
using namespace autodiff;

// The scalar function for which the gradient is needed
var f(const ArrayXvar& x)
{
    return sqrt((x * x).sum()); // sqrt(sum([xi * xi for i = 1:5]))
}

void setup()
{
    using Eigen::VectorXd;

    VectorXvar x(5);                       // the input vector x with 5 variables
    x << 1, 2, 3, 4, 5;                    // x = [1, 2, 3, 4, 5]

    var y = f(x);                          // the output variable y

    VectorXd dydx = gradient(y, x);        // evaluate the gradient vector dy/dx

    std::cout << "y = " << y << std::endl;           // print the evaluated output y
    std::cout << "dy/dx = \n" << dydx << std::endl;  // print the evaluated gradient vector dy/dx
}
