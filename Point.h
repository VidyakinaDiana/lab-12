#ifndef UNTITLED_POINT_H
#define UNTITLED_POINT_H


class Point { 
private:
    double x;
    double y;
public:
    Point();
    Point(double, double);
    double get_x();
    double get_y();
    void set_x(double);
    void set_y(double);
};


#endif