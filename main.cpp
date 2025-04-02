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

const bool RUN_JOEL_TESTS = false;
const bool RUN_VIOLET_TESTS = false;

const bool RUN_EXPONENTIATION_TESTS = false;
const bool RUN_MULTIPLICATION_TESTS = false;

int main ( void )
{
    // basic constructor tests
    Complex c1(4,2), c2(3.1,-1), c3;
    if (RUN_JOEL_TESTS) {
        cout << "c1 = " << c1 << endl;
        cout << "c2 = " << c2 << endl;
        cout << "(Should be '0' because a and b are 0 from default constructor) c3 = " << c3 << endl;

        // copy constructor test
        Complex to_copy(5, 8);
        cout << "(Should be '5+8i') " << Complex(to_copy) << endl;
    }
    /**/
    /*Complex c9(4);*/
    /*cout << "c9 = " << c9 << endl;*/
    /*c9 = -c1;*/
    /*cout << "c9 = " << c9 << endl;*/
    /**/
    /**/
    /*// addition tests*/
    if (RUN_VIOLET_TESTS) {
        c3 = c1 + c2;
        cout << c1 << endl << c2 << endl << "c3 = c1+c2 = " << c3 << endl;
        /**/
        c3 = c1 + 7;
        cout << c1 << endl << "c3 = c1+7 = " << c3 << endl;
        /**/
        float test = 7.7;
        c3 = c1 + test;
        cout << c1 << endl << "c3 = c1+7.7 = " << c3 << endl;
        /**/
        /*// subtraction tests*/
        c3 = c1 - c2;
        cout << c1 << endl << c2 << endl << "c3 = c1-c2 = " << c3 << endl;
    }
    /**/
    /*// multiplication*/
    if (RUN_MULTIPLICATION_TESTS) {
        cout << "(3 + 5i)(9 + 2i) is " << Complex(3, 5)*Complex(9, 2) <<  ", should be (17 + 51i)" << endl;
    }
    /**/
    /*// conjugate test*/
    if (RUN_VIOLET_TESTS) {
        c3 = ~c1;
        cout << c1 << endl << "c3 = ~c1 = " << c3 << endl;
    }
    /**/
    /*// division test*/
    /*c3 = c1 / c2;*/
    /*cout << "c3 = c1/c2 = " << c3 << endl;*/
    /**/
    /*// exponentiation test*/
    if (RUN_EXPONENTIATION_TESTS) {
        cout << (Complex(2, 3)^0) << " Should be 1" << endl;
        cout << (Complex(2, 3)^1) << " Should be 2+3i" << endl;
        cout << (Complex(2, 3)^2) << " Should be -5+12i" << endl;
        cout << (Complex(2, 3)^3) << " Should be -46+9i" << endl;
        cout << (Complex(2, 3)^4) <<  " Should be -199-120i" << endl;

        cout << (Complex(2, 3)^-1) <<  " Should be 0.153-0.23i" << endl;
        cout << (Complex(2, 3)^-2) <<  " Should be -0.029-0.071i" << endl;
    }

    /*// abs test*/
    /*cout << "c1.abs() = " << c1.abs() << endl;*/
    /**/
    // cin >> test
    if (RUN_JOEL_TESTS) {
        cout << "Enter complex in the form of 'bi': ";
        cin >> c3;
        cout << c3 << endl;

        cout << "Enter complex in the form of '-bi': ";
        cin >> c3;
        cout << c3 << endl;

        cout << "Enter complex in the form of '+bi': ";
        cin >> c3;
        cout << c3 << endl;

        cout << "Enter complex in the form of 'a': ";
        cin >> c3;
        cout << c3 << endl;

        cout << "Enter complex in the form of '-a': ";
        cin >> c3;
        cout << c3 << endl;

        cout << "Enter complex in the form of '+a': ";
        cin >> c3;
        cout << c3 << endl;

        cout << "Enter complex in the form of 'a+bi': ";
        cin >> c3;
        cout << c3 << endl;

        cout << "Enter complex in the form of '-a+bi': ";
        cin >> c3;
        cout << c3 << endl;

        cout << "Enter complex in the form of 'a+-bi': ";
        cin >> c3;
        cout << c3 << endl;

        cout << "Enter complex in the form of '-a+-bi': ";
        cin >> c3;
        cout << c3 << endl;

        cout << "Enter complex in the form of 'a-bi': ";
        cin >> c3;
        cout << c3 << endl;

        cout << "Enter complex in the form of '-a-bi': ";
        cin >> c3;
        cout << c3 << endl;

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

        // assignment tests
        Complex original(6, 8);
        Complex new_c = original;

        cout << "(Should be 6+8i) " << new_c << endl;

        // equality tests
        Complex c11(5, 4), c12(5, 4);
        cout << "(Should be true, i.e 1) " << (c11 == c12) << endl;
        cout << "(Should be false, i.e 0) " << (c11 != c12) << endl;

        Complex c13(5, 9), c14(5, 4);
        cout << "(Should be false, i.e 0) " << (c13 == c14) << endl;
        cout << "(Should be true, i.e 1) " << (c13 != c14) << endl;
    }

    return 0;
}
