#include<iostream>
using namespace std;

// 使用来自另一个文件中的warming变量
extern double warming;

void update(double dt)
{
    extern double warming;
    warming += dt;

    cout << "Updating global warming to " << warming << " degress.\n";

}
void local()
{
    double warming = 0.8;
    cout << "Local warming = " << warming << " degress.\n";

    cout << "But global warming = " << ::warming << " degress.\n";
}

int main()
{
    cout << "Global warming is " << warming << " degress.\n";

    update(0.1);
    cout << "Global warming is " << warming << " degress.\n";

    local();
    cout << "Global warming is " << warming << " degress.\n";

    system("pause");
    return 0;
}