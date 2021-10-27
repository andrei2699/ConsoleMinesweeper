#include <iostream>
#include "Commands.hpp"
#include "MapGeneration.hpp"

using namespace std;

#ifndef APP_NAME
#define APP_NAME "Minesweeper"
#endif

int main()
{
    cout << APP_NAME
         << endl
         << endl;

    int mapSize;

    cout << "Enter Map Size (5x5, 25x25)" << endl;

    cin >> mapSize;
    MapGeneration map(mapSize);

    ClearScreen();
    map.Generate();
    map.DiscoverAll();
    map.Draw();

    cout << endl
         << map.BombCount << endl;

    return 0;
}