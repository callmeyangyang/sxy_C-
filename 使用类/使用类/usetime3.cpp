#include<iostream>
#include "mytime3.h"

int main()
{
#if 0
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    std::cout << "planning time = ";
    planning.Show();
    std::cout << std::endl;

    std::cout << "coding time = ";
    coding.Show();
    std::cout << std::endl;

    std::cout << "fixing time = ";
    fixing.Show();
    std::cout << std::endl;

    /*total = coding.Sum(fixing);
    std::cout << "coding.Sum(fixing) = ";
    total.Show();
    std::cout << std::endl;*/

    // total = coding.operator+(fixing);
    total = coding + fixing;
    std::cout << "coding time = ";
    total.Show();
    std::cout << std::endl;

#endif

#if 0
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    std::cout << "weeding time = ";
    weeding.Show();
    std::cout << std::endl;

    std::cout << "waxing time = ";
    waxing.Show();
    std::cout << std::endl;

    std::cout << "total work time = ";
    total = weeding + waxing;
    total.Show();
    std::cout << std::endl;

    diff = weeding - waxing;
    std::cout << "weeding time - waxing time = ";
    diff.Show();
    std::cout << std::endl;

    adjusted = total * 1.5;
    std::cout << "adjusted work time= ";
    adjusted.Show();
    std::cout << std::endl;

#endif

    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    std::cout << "Aida and Tosca:\n";
    std::cout << aida << "; " << tosca << std::endl;

    temp = aida + tosca;
    std::cout << "Aida + Tosca: " << temp << std::endl;

    temp = aida * 1.17;
    std::cout << "Aida * 1.17: " << temp << std::endl;
    std::cout << "10.0 * Tosca: " << 10.0 * tosca << std::endl;

    system("pause");
    return 0;
}