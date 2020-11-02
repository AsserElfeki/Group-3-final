//
//  functions.h
//  FCPlab
//

#ifndef functions_h
#define functions_h

#include <iostream>

//TASK 1 - Define a structure
struct point {
    double x, y;
};

//TASK 2 - Define a structure
struct circle {
    point O;
    double r;
};

//TASK 2 - Define a structure
struct square {
    point A, B;
};

/** Function getRandomPoint
 @return random point r
 @TODO function generates random point
 */
point getRandomPoint();

/** Function fill_array_with_points
 @param arr - is the array of points
 @param size - integer value of array size
 @return nothing (void)
 @Fills array with the random points
 */

void fill_array_with_points(point arr[], int size);

/** Function distance
 @param A - first point's coordinates
 @param B - second point's coordinates
 @return distance beetween points
DONE
 */
double distance(const point& A, const point& B);

/** Function middle_point
 @param A - first point's coordinates
 @param B - second point's coordinates
 @return middle point's coordinates
DONE
 */
point middle_point(const point& A, const point& B);

/** Function area_of_square
 @param my_square - random square with its two points
 @return area of that square
DONE
 */
double area_of_square(const square& my_square);


/** Function returning a larger square out of the two taken
 @param s1 first square
 @param s2 second square
 @return a larger square of the two
 */
square get_larger_square(const square& s1, const square& s2);

/** Function returning a circle area
 @param my_circle - circle
 @return an area of the circle
 */
double area_of_circle(const circle& my_circle);

#endif /* functions_h */
