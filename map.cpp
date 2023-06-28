#include "map.h"
#include <iostream>

void Map::setHorizontalDimension()
{
    std::cout << "Enter horizontal dimension: ";
    std::cin >> m_horizontalDimension;
    std::cin.ignore();
}

void Map::setVerticalDimension()
{
    std::cout << "Enter vertical dimension: ";
    std::cin >> m_verticalDimension;
    std::cin.ignore();
}

unsigned int Map::getHorizontalDimension() { return m_horizontalDimension; }
unsigned int Map::getVerticalDimension() { return m_verticalDimension; }
unsigned int Map::getMapArea() const { return m_mapArea; }

void Map::createAreaGrid()
{
    m_mapArea = m_horizontalDimension * m_verticalDimension;
    for (int i = 0; i < m_mapArea; i++)
    {
        areaGrid.push_back('.');
    }
}

void Map::displayMap()
{
    for (int i = 0; i < m_verticalDimension; i++)
    {
        for (int j = 0; j < m_horizontalDimension; j++)
        {
            std::cout << areaGrid[j];
        }
        std::cout << std::endl;
    }
}