#include <iostream>


enum eDir
{ 
    STOP = 0, LEFT = 1, UPLEFT = 2, DOWNLEFT = 3, RIGHT = 4, UPRIGHT = 5, DOWNRIGHT = 6

};

class cBall
{
    private:
        int x, y;
        int originalX, originalY;
        eDir direction;
    public:
        cBall(int posX, int posY)
        {
            originalX = posX;
            originalY = posY;
        }
};


int main()
{

}