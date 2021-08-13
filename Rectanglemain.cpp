// lab 12 ввод.cpp: Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Point.h"
#include "Rectangle.h"

int main() {
    Point input[4];

    printf("Set coordinates\n");

    for (int i = 0; i < 4; i++)
    {
        double a, b;
        printf("Enter x%d: ", i + 1);
        while (scanf("%lf", &a) != 1)
        {
            printf("Error, try again\n");
            while (getchar() != '\n');
        }
        printf("Enter y%d: ", i + 1);
        while(scanf("%lf", &b) != 1)
        {
            printf("Error, try again\n");
            while (getchar() != '\n');
        }
        input[i].set_x(a);
        input[i].set_y(b);
    }
    Rectangle rectangle(input[0], input[1], input[2], input[3]);

    if (rectangle.is_square())
    {
        printf("It is square\n");
    }
    else
    {
        printf("It is not square\n");
    }

    return 0;
}