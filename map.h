#ifndef MAP_HH_
#define MAP_HH_

#include <vector>


class Map
{
    private:
        unsigned int m_horizontalDimension;
        unsigned int m_verticalDimension;
        unsigned int m_mapArea;
        std::vector<char> areaGrid;
    public: 
        void setHorizontalDimension();
        void setVerticalDimension();
        unsigned int getHorizontalDimension();
        unsigned int getVerticalDimension();
        unsigned int getMapArea() const;
        void createAreaGrid();
        void displayMap();

};

#endif 