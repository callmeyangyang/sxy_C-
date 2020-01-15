#include<iostream>
#include "stock10.h"

int usestock2()
{
#if 0
    using std::cout;
    cout << "Using constructors to create new objects\n";
    Stock stock1("NanoSmart", 12, 20.0);
    stock1.show();

    Stock stock2("Boffo Objects", 2, 2.0);
    stock2.show();

    cout << "Assigning stock1 to stock2:\n";
    stock2 = stock1;

    cout << "Listing stock1 and stock2:\n";
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object:\n";
    stock1 = Stock("Nifty Foods", 10, 50.0);
    cout << "Revised stock1:\n";
    stock1.show();
    cout << "Done\n";
#endif

    const int STKS = 4;

    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };

    std::cout << "Stock holdings:\n";
    int st;
    for(st = 0; st < STKS; st++)
    {
        stocks[st].show();
    }

    const Stock * top = &stocks[0];
    for(st = 1; st < STKS; st++)
    {
        top = &top->topval(stocks[st]);
    }

    std::cout << "\nMost valuable holding:\n";
    top->show();

    system("pause");
    return 0;
}