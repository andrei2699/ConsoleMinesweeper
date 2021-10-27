#include "MapGeneration.hpp"
#include "Commands.hpp"
#include "ConsoleColor.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>

MapGeneration::MapGeneration(int size)
{
    _mapSize = size;
    _map = new Tile *[_mapSize];
    for (int i = 0; i < _mapSize; i++)
    {
        _map[i] = new Tile[_mapSize];
        for (int j = 0; j < _mapSize; j++)
        {
            _map[i][j] = 0;
        }
    }

    srand(time(NULL));
}

MapGeneration::~MapGeneration()
{
    for (int i = 0; i < _mapSize; i++)
    {
        delete[] _map[i];
    }

    delete[] _map;
}

void MapGeneration::Draw()
{
    char *line = new char[_mapSize];

    for (int i = 0; i < _mapSize; i++)
    {
        for (int j = 0; j < _mapSize; j++)
        {
            line[j] = _map[i][j].GetChar();
        }
        WriteLineToScreen(line);
    }

    delete line;
}

void MapGeneration::Generate()
{
    BombCount = 0;
    for (int i = 0; i < _mapSize; i++)
    {
        for (int j = 0; j < _mapSize; j++)
        {
            if (rand() % 100 < 20)
            {
                _map[i][j].SetBomb();
                BombCount++;
            }
        }
    }

    if (BombCount == 0)
    {
        _map[rand() % _mapSize][rand() % _mapSize].SetBomb();
        BombCount++;
    }
}

void MapGeneration::DiscoverAll()
{
    for (int i = 0; i < _mapSize; i++)
    {
        for (int j = 0; j < _mapSize; j++)
        {
            _map[i][j].Discover();
        }
    }
}