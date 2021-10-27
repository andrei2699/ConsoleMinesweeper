#include "Tile.hpp"

Tile::Tile()
{
}

Tile::Tile(int value) : Value(value), Type(UNDISCOVERED)
{
}

Tile::~Tile()
{
}

char Tile::GetChar()
{
    if (Type & DISCOVERED)
    {
        if (Type & BOMB)
        {
            return 'O';
        }

        if (Type & EMPTY)
        {
            return Value + '0';
        }
    }
    else
    {
        if (Type & FLAG)
        {
            return 'F';
        }
    }

    return ' ';
}

void Tile::SetValue(int value)
{
    Value = value;
    Type = EMPTY;
    Discover();
}

void Tile::SetBomb()
{
    Type = BOMB;
    Value = 0;
}

void Tile::Discover()
{
    Type = (TileTypes)(Type | DISCOVERED);
}