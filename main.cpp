//========================================================
// CS 173
// main.cpp
// March 2024
// This file tests the complex class.
//========================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Complex.h"

int main ( void )
{
    // basic constructor tests
    Complex c1(4,2), c2(3.1,-1), c3;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "(Should be '0' because a and b are 0 from default constructor) c3 = " << c3 << endl;

    // copy constructor test
    Complex to_copy(5, 8);
    cout << "(Should be '5+8i') " << Complex(to_copy) << endl;
    /**/
    /*Complex c9(4);*/
    /*cout << "c9 = " << c9 << endl;*/
    /*c9 = -c1;*/
    /*cout << "c9 = " << c9 << endl;*/
    /**/
    /**/
    /*// addition tests*/
    /*c3 = c1 + c2;*/
    /*cout << "c3 = c1+c2 = " << c3 << endl;*/
    /**/
    /*c3 = c1 + 7;*/
    /*cout << "c3 = c1+7 = " << c3 << endl;*/
    /**/
    /*c3 = c1 + 7.7;*/
    /*cout << "c3 = c1+7.7 = " << c3 << endl;*/
    /**/
    /*// subtraction tests*/
    /*c3 = c1 - c2;*/
    /*cout << "c3 = c1-c2 = " << c3 << endl;*/
    /**/
    /*// multiplication*/
    /*c3 = c1 * c2;*/
    /*cout << "c3 = c1*c2 = " << c3 << endl;*/
    /**/
    /*// conjugate test*/
    /*c3 = ~c1;*/
    /*cout << "c3 = ~c1 = " << c3 << endl;*/
    /**/
    /*// division test*/
    /*c3 = c1 / c2;*/
    /*cout << "c3 = c1/c2 = " << c3 << endl;*/
    /**/
    /*// exponentiation test*/
    /*c3 = c1^3;*/
    /*cout << c1 << "^" << 3 << " = " << c3 << endl;*/
    /**/
    /*// abs test*/
    /*cout << "c1.abs() = " << c1.abs() << endl;*/
    /**/
    // cin >> test
    /*cout << "Enter c3: ";*/
    /*cin >> c3;*/
    /*cout << c3 << endl;*/

    // cout tests
    cout << "(Should be just 4i because a is 0) c3 = " << Complex(0, 4) << endl;
    cout << "(Should be just 6 because b is 0) c3 = " << Complex(6, 0) << endl;
    cout << "(Should be with minus sign) c3 = " << Complex(3, -3) << endl;
    cout << "(Should be 5+i because b is 1) c3 = " << Complex(5, 1) << endl;

    // setter and getter tests
    Complex c10(5, 3);
    c10.setReal(3);
    cout << "(Should be 3+3i) " << c10 << endl;

    c10.setImag(99);
    cout << "(Should be 3+99i) " << c10 << endl;

    cout << "(Should be 3) " << c10.getReal() << endl;
    cout << "(Should be 99) " << c10.getImag() << endl;

    return 0;
}
