#include <iostream>
#include <cmath>
using namespace std;

// all the functions are called below in the "main" function. please uncomment the issue you want to test. 


//“Hello world!” program.

int issue1() {
    cout << "Hello World!" << endl;
    return 0;
}


//Program for adding two numbers read from the keyboard

int issue2()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    sumOfTwoNumbers = firstNumber + secondNumber;
    cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;
    return 0;
}



//Equation solver for ax + b = c, values a, b, and c read from the keyboard.

void issue3() {
    float a, b, c, X;
    cout << "The Equation is: aX + b = c" << endl;
    cout << "Enter the values of a, b, c : " << endl;
    
    cin >> a >> b >> c;
    cout << "The equation is " << a << "X + " << b << " = " << c << endl;

    if (a == 0){
        cout << "There are infinite solutions possible for this equation" << endl;
    }
    else if (b == c) {
        cout << "The value of X = 0" << endl;
    }
    else {
        X = (c - b) / (a);
        cout << "The value of X = " << X << endl;
    }
}


//Solver for ax2 + bx + c = 0 (with complex solutions).

int issue4()
{
    double a, b, c, x1, x2, D, Re, Im;
    cout << "the equation is ax2 + bx + c = 0" << endl;
    cout << "Enter values of coefficients a, b and c: ";
    cin >> a >> b >> c;
    D = b * b - 4 * a * c;

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "The roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (D == 0) {
        cout << "The roots are real and equal." << endl;
        x1 = (-b + sqrt(D)) / (2 * a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        Re = -b / (2 * a);
        Im = sqrt(-D) / (2 * a);
        cout << "The roots are complex and different." << endl;
        cout << "x1 = " << Re << "+" << Im << "i" << endl;
        cout << "x2 = " << Re << "-" << Im << "i" << endl;
    }

    return 0;
}


// Solver for a system of two linear equations:
// a1x + b1y = c1
// a2x + b2y = c2

void issue5() {
    float a1, a2, b1, b2, c1, c2, x, y, D;

    cout << "The system of equations are:" << endl;
    cout << "a1x + b1y = c1" << endl;
    cout << "a2x + b2y = c2" << endl; 
    cout << "Enter coefficients a1, b1, c1, a2, b2 and c2: " << endl;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    D = (a1 * b2) - (a2 * b1); 
     
    // confirmation that the numbers are put correctly
    cout << "the equations are: " << endl;
    cout << a1 << " x+ " <<  b1 << "y" << " = " << c1 << endl; 
    cout << a2 << "x+ " <<  + b2 << "y" << " = " << c2 << endl; 

    if (D == 0) {
        cout << "Error" << endl;
    }
    else
    {
        x = ((c1 * b2) - (c2 * b1)) / ((a1 * b2) - (a2 * b1));
        y = ((a1 * c2) - (a2 * c1)) / ((a1 * b2) - (a2 * b1));

        cout << "x=" << x << endl; 
        cout << "y=" << y << endl; 
    }
}


int main()
{
 //   issue1();
 //   issue2();
 //   issue3();
    issue4();
    issue5();
    return 0;
}