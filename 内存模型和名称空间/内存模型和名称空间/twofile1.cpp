#include<iostream>

int tom = 3;
int dick = 30;

static int harry = 300;

void remote_access();

int twofile1()
{
    using namespace std;
    cout << "main() reports the following address: \n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    
    remote_access();

    system("pause");
    return 0;
}