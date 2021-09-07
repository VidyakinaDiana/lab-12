#ifndef POINT_H
#define POINT_H


class Point { 
private:
    double x;
    double y;
public:
    Point();
    Point(double, double);
    Point(const Point&);
    ~Point();
    double get_x();
    double get_y();
    void set_x(double);
    void set_y(double);
    Point& operator=(const Point& object);
};


#endif