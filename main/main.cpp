#include <iostream>
#include "Commands.hpp"

using namespace std;

int main()
{
    cout << "Hello, world" << endl;

    int x;
    cin >> x;

    ClearScreen();

    cout << "Hello" << x << endl;

    return 0;
}