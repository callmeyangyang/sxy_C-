#include<iostream>
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;

int vegnews()
{
    String name;
    std::cout << "Hi, What's your name?\n>> ";
    std::cin >> name;

    std::cout << name << ", please enter up to " << ArSize
        << " short sayings <empty line to quit>:\n";

    String sayings[ArSize];
    char temp[MaxLen];
    int i;
    for(i = 0; i < ArSize; i++)
    {
        std::cout << i + 1 << ": ";
        std::cin.get(temp, MaxLen);
        while(std::cin && std::cin.get() != '\n')
        {
            continue;
        }
        if(!std::cin || temp[0] == '\0')
        {
            break;
        }
        else
        {
            sayings[i] = temp;
        }
    }
    int total = i;

    if(total > 0)
    {
        std::cout << "Here are your sayings:\n";
        for(i = 0; i < total; i++)
        {
            std::cout << sayings[i][0] << ": " << sayings[i] << std::endl;
        }

        int shortest = 0;
        int first = 0;
        for(i = 1; i < total; i++)
        {
            if(sayings[i].length() < sayings[shortest].length())
            {
                shortest = i;
            }
            if(sayings[i] < sayings[first])
            {
                first = i;
            }
        }

        std::cout << "Shortest saying:\n" << sayings[shortest] << std::endl;
        std::cout << "First alphabetically:\n" << sayings[first] << std::endl;
        std::cout << "This program used " << String::HowMany() << " String objects. Bye.\n";
    }
    else
    {
        std::cout << "No input! Bye.\n";
    }

    system("pause");
    return 0;
}