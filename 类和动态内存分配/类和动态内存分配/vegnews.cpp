#include<iostream>
#include "strngbad.h"

void callme1(StringBad &);
void callme2(StringBad);

int main()
{
    {
        std::cout << "Starting an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");

        std::cout << "headline1: " << headline1 << std::endl;
        std::cout << "headline2: " << headline2 << std::endl;
        std::cout << "sports: " << sports << std::endl;
        
        callme1(headline1);
        std::cout << "headline1: " << headline1 << std::endl;

        callme2(headline2);
        std::cout << "headline2: " << headline2 << std::endl;

        std::cout << "Initialze one object to another:\n";
        StringBad sailor = sports;
        std::cout << "sailor: " << sailor << std::endl;

        std::cout << "Assign one object to another:\n";
        StringBad knot;
        knot = headline1;
        std::cout << "knot: " << knot << std::endl;
        std::cout << "Exiting the block.\n";
    }
    
    std::cout << "End of main().\n";
    system("pause");
    return 0;
}

void callme1(StringBad & rsb)
{
    std::cout << "String passed by reference:\n";
    std::cout << "      \"" << rsb <<"\"\n";
}

void callme2(StringBad sb)
{
    std::cout << "String passed by value:\n";
    std::cout << "      \"" << sb <<"\"\n";
}