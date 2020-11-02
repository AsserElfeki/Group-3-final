#include <iostream>
#include <vector>
#include "functions.h"
#include "university.h"
#include <time.h>
using namespace std;



void main()
{
    const int arr_size = 10;
    int arr[arr_size];

    srand(time(0));

    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = rand() % 100+1;
        cout << arr[i] << " ";
    }
    return;
}






//int mainss(int argc, char* argv[])
//{
//
//    //TASK 1 - Define a structure
//    point example_point = { 4.5, 3 };
//
//    //TASK 2 - Define a structure
//    circle example_circle = { 4.5, 3 , 8.5 };
//
//    //TASK 2 - Define a structure
//    square example_square = { 5, 2.0 };
//
//    //--------------------------------------------------------
//
//    //TASK 1 - Define a function: random point
//    point RAND = getRandomPoint();
//
//    //TASK 2 - Define a function: array with random points
//    const int arr_size = 10;
//    point arr_points[arr_size];
//
//    fill_array_with_points(arr_points, arr_size);
//
//    //TASK 3 - Define a function: distance between points
//    double out = distance(arr_points[0], arr_points[1]);
//
//    std::cout << "Distance between (" << arr_points[0].x << "," << arr_points[0].y << ") and (" \
//        << arr_points[1].x << "," << arr_points[1].y << ")  is " << out << std::endl;
//
//
//    //TASK 4 - Define a function: middle point between points
//    point a, b;
//    middle_point(a, b);
//
//    //TASK 5 - Define a function: area of square
//    std::cout << "Area of my square is: " << area_of_square(example_square) << std::endl;
//
//    //TASK 6 - Define a function: larger square from two squares taken as parameters -DONE
//    //TASK 7 - Define a function: area of a circle; -DONE
//
//    point some_point = getRandomPoint();
//
//
//    double out = distance(arr_points[0], arr_points[1]);
//    std::cout << "Distance between (" << arr_points[0].x << "," << arr_points[0].y << ") and (" \
//        << arr_points[1].x << "," << arr_points[1].y << ")  is " << out << std::endl;
//
//
//    return 0;
//}
