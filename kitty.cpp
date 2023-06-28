#include "kitty.h"


void Kitty::beginPosition(const Map& p_map)
{
    m_x = p_map.getMapArea() / 2; //need getter in map class
}