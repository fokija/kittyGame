#include <iostream>

#include "levelCreator.h"

int main()
{
    LevelCreator level;
    std::cout << "Enter map dimensions" << std::endl;
    std::cout << "Map area should not be smaller than 25 unit and bigger than 900 unit" << std::endl;
    level.setHorizontalDimension();
    level.setVerticalDimension();
    level.createAreaGrid();
    level.displayMap();
}