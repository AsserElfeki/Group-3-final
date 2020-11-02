//
//  functions.h
//  FCPlab
//

#ifndef functions_h
#define functions_h

#include <iostream>

struct point {
    double x, y;
};

struct circle {
    point O;
    double r;
};

struct square {
    point A, B;
};



/** Function ...
 @param ...
 @return ...
 @TODO write the function description in the comment
 @TODO search for a nicer/better way of randomly choosing doubles.
 */
point getRandomPoint();

/** Function ...
 @param ...
 @return ...
 @TODO write the function description in the comment
 */
 //void fill_array_with_points(point * arr)
void fill_array_with_points(point arr[], int size);

/** Function ...
 @param ...
 @return ...
 @TODO write the function description in the comment
 @TODO caluclate the actual value of dist
 */
double distance(const point& A, const point& B);

/** Function ...
 @param ...
 @return ...
 @TODO write the function description in the comment
 @TODO caluclate the actual value of m
 */
point middle_point(const point& A, const point& B);

/** Function ...
 @param ...
 @return ...
 @TODO write the function description in the comment
 @TODO caluclate the actual area and return it
 */
double area_of_square(const square& my_square);


/** Function returning a larger square out of the two taken
 @param s1 first square
 @param s2 second square
 @return a larger square of the two
 */
square get_larger_square(const square& s1, const square& s2);






#endif /* functions_h */
