#include <iostream>

#include "map.h"

int main()
{
    Map map;
    std::cout << "Enter map dimensions" << std::endl;
    std::cout << "Map area should not be smaller than 25 unit and bigger than 900 unit" << std::endl;
    map.setHorizontalDimension();
    map.setVerticalDimension();
    map.createAreaGrid();
    map.displayMap();
}