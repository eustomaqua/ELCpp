#ifndef __POINT__
#define __POINT__

class Point {
   private:
    int x;
    int y;

   public:
    Point() {
        this->x = 0;
        this->y = 0;
    }
    int const inline getX() { return this->x; }
    int const inline getY() { return this->y; }
    inline void setX(int x) { this->x = x; }
    inline void setY(int y) { this->y = y; }
};

#endif
