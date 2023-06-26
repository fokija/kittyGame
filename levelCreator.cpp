#include "levelCreator.h"
#include <iostream>


void LevelCreator::setHorizontalDimension()
{
    std::cout << "Enter horizontal dimension: ";
    std::cin >> m_horizontalDimension;
    std::cin.ignore();
}

void LevelCreator::setVerticalDimension()
{
    std::cout << "Enter vertical dimension: ";
    std::cin >> m_verticalDimension;
    std::cin.ignore();
}

void LevelCreator::createAreaGrid()
{
    for (auto x : areaGrid) { x = '.'; }
}

void LevelCreator::displayMap()
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