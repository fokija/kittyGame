#ifndef LEVELCREATOR_H
#define LEVELCREATOR_H

#include "mapParameters.h"
#include <vector>
class LevelCreator : protected MapParameters
{
    protected:
        std::vector<char> areaGrid;
    public:
        void setHorizontalDimension();
        void setVerticalDimension();
        void createAreaGrid();
        void displayMap();
};


#endif