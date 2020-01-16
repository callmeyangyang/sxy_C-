#include<iostream>
#include "stonewt.h"

void display(const Stonewt & st, int n);

int main()
{
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);

    std::cout << "The celebrity weighed ";
    incognito.show_stn();

    std::cout << "The detective weighed ";
    wolfe.show_stn();

    std::cout << "The President weighed ";
    taft.show_lbs();

    incognito = 276.8;
    taft = 325;

    std::cout << "After dinner, the President weighed ";
    taft.show_lbs();
    display(taft, 2);

    std::cout << "The wrestler weighed even more.\n";
    display(422, 2);

    std::cout << "No stone left unearned.\n";
    
    system("pause");
    return 0;
}

void display(const Stonewt & st, int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << "Wow! ";
        st.show_stn();
    }
}