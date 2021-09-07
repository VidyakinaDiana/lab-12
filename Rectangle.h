//�������� ����� Rectangle c ������������ 4 - � ������.
//� ������������ ������������� ��������, ��� ���������� ��������� ������������� �� ��������� �� ������ 50.0.
//������������� ������� - ������� square, ������������, �������� �� ������������� ���������.
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