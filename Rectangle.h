//Создайте класс Rectangle c координатами 4 - х вершин.
//В конструкторе предусмотреть проверку, что координаты описывают прямоугольник со сторонами не больше 50.0.
//Предусмотреть элемент - функцию square, определяющую, является ли прямоугольник квадратом.
#ifndef UNTITLED_RECTANGLE_H
#define UNTITLED_RECTANGLE_H
#include "Point.h"

class Rectangle {
private:
    Point points[4];
    double dist(Point, Point); 
public:
    Rectangle(); 
    Rectangle(Point, Point, Point, Point); 
    ~Rectangle();
    Rectangle(const Rectangle& copy);
    Point get_(int);
    void set_(Point*);
    bool is_square();
};
#endif 