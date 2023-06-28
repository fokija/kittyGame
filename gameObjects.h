#ifndef GAMEOBJECTS_HH_
#define GAMEOBJECTS_HH_

class GameObjects 
{
    protected:
        unsigned int m_x;
        unsigned int m_y;
    public:
        virtual void setX();
        virtual void setY();
        
};

#endif