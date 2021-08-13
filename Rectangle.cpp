#include "Rectangle.h"
#include <math.h>
#include <iostream>

Rectangle::Rectangle(Point left_up, Point right_up, Point right_down, Point left_down) {

    if (dist(left_up, right_down) != 
        dist(left_down, right_up))
    {
        printf("Object is not rectangle - default object was created\n");
        points[0] = left_up;
        points[1] = right_up;
        points[2] = right_down;
        points[3] = left_down;
    }
    else {
        if (dist(left_up, left_down) <= 50 &&
            dist(left_down, right_down) <= 50) {
            points[0] = left_up;
            points[1] = right_up;
            points[2] = right_down;
            points[3] = left_down;
        }
        else {
            printf("Side is more than 50 - default object was created\n");
            points[0] = left_up;
            points[1] = right_up;
            points[2] = right_down;
            points[3] = left_down;
        }
    }
}
double Rectangle::get_() {
    return 0;
}

void Rectangle::set_(double ) {
    ;
}

Rectangle::~Rectangle() {

}
Rectangle::Rectangle(const Rectangle& copy) {

}
Rectangle::Rectangle() { 
    points[0].set_x(0);
    points[1].set_x(1);
    points[2].set_x(1);
    points[3].set_x(0);
    points[0].set_y(1);
    points[1].set_y(1);
    points[2].set_y(0);
    points[3].set_y(0);
}

bool Rectangle::is_square() {
    if (dist(points[3], points[0]) ==
        dist(points[3], points[2]))
        return true;

    return false;
}

double Rectangle::dist(Point a, Point b) { 
    return sqrt(pow(a.get_x() - b.get_x(), 2) + pow(a.get_y() - b.get_y(), 2));
}