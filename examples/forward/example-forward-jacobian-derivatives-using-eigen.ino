// C++ includes
#include <iostream>
// Eigen includes
#include <ArduinoEigenDense.h>
// autodiff include
#include <autodiff_forward_real.h>
using namespace autodiff;

// The vector function for which the Jacobian is needed
VectorXreal f(const VectorXreal& x)
{
    return x * x.sum();
}

void setup()
{
    using Eigen::MatrixXd;

    VectorXreal x(5);                           // the input vector x with 5 variables
    x << 1, 2, 3, 4, 5;                         // x = [1, 2, 3, 4, 5]

    VectorXreal F;                              // the output vector F = f(x) evaluated together with Jacobian matrix below

    MatrixXd J = jacobian(f, wrt(x), at(x), F); // evaluate the output vector F and the Jacobian matrix dF/dx

    std::cout << "F = \n" << F << std::endl;    // print the evaluated output vector F
    std::cout << "J = \n" << J << std::endl;    // print the evaluated Jacobian matrix dF/dx
}
