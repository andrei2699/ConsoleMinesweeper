#ifndef MAP_GENERATION_H
#define MAP_GENERATION_H

#include "Tile.hpp"

class MapGeneration
{
public:
    MapGeneration(int size);
    ~MapGeneration();

    MapGeneration(const MapGeneration &) = delete;
    MapGeneration &operator=(const MapGeneration &) = delete;

    void Draw();
    void Generate();
    void DiscoverAll();

    int BombCount;

private:
    int _mapSize;
    Tile **_map;
};

#endif // MAP_GENERATION_H