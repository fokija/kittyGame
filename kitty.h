#ifndef KITTY_H
#define KITTY_H

#include "gameObjects.h"
#include "map.h"

class Kitty : public GameObjects
{   private:
        const char m_kitty = 'K';
    public:
        void beginPosition(const Map&);
        
};


#endif