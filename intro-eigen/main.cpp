#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;
using Eigen::Vector4f;

int main(int, char **)
{
    MatrixXd m(2, 2);
    m(0, 0) = 3;
    m(1, 0) = 2.5;
    m(0, 1) = -1;
    m(1, 1) = m(1, 0) + m(0, 1);
    std::cout << m << std::endl;

    Vector4f a, b;
    a << 1, 2, 3, 4;
    b << 1, 2, 3, 4;
    asm("#it begins here!");
    a += b;
    asm("#it ends here!");
    std::cout << a << std::endl;
}
