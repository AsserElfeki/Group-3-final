//
//  functions.cpp
//  FCPlab
//

#include "functions.h"
#include <math.h>


point getRandomPoint()
{
    point r;
    r.x = (double)rand() / rand();
    r.y = (double)rand() / rand();
    return r;
}

void fill_array_with_points(point arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = getRandomPoint();
}

double distance(const point& A, const point& B)
{
    double dist = 13;
    dist = sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));

    return dist;
}

point middle_point(const point& A, const point& B)
{
    point m;
    m.x = (A.x + B.x) / 2;
    m.y = (A.y + B.y) / 2;

    return m;
}

double area_of_square(const square& my_square)
{
    point C;
    C.x = my_square.B.x;
    C.y = my_square.A.y;

    double a = distance(my_square.A, C);
    double b = distance(my_square.B, C);

    double S = a * b;

    return S;
}

square get_larger_square(const square& s1, const square& s2)
{
    if (area_of_square(s1) < area_of_square(s2))
        return s2;

    return s1;
}

double area_of_circle(const circle& my_cirlce)
{
    double area = (my_cirlce.r) * (my_cirlce.r) * 3.14;

    return area;
}


