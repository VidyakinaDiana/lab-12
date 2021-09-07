#include "Point.h"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(double _x, double _y) {
    x = _x;
    y = _y;
}

Point::Point(const Point& object) {
    x = object.x;
    y = object.y;
}

Point::~Point() {
    x = 0;
    y = 0;
}

double Point::get_x() {
    return x;
}

double Point::get_y() {
    return y;
}

void Point::set_x(double _x) {
    x = _x;
}

void Point::set_y(double _y) {
    y = _y;
}

Point& Point::operator =(const Point& object) {
    x = object.x;
    y = object.y;
    return *this;
}