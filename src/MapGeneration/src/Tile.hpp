#ifndef TILE_H
#define TILE_H

#include "TileTypes.hpp"

class Tile
{
public:
    Tile();
    Tile(int value);
    ~Tile();

    char GetChar();
    void SetValue(int value);
    void SetBomb();
    void Discover();

private:
    TileTypes Type;
    int Value;
};

#endif // TILE_H