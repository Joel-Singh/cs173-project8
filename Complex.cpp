//========================================================
// Joel Singh, Jamie Barber, Violet Eck
// Complex.cpp
// Spring 2025
// This file contains the class methods for the
// Complex number class.
//========================================================

#include "Complex.h"
#include <functional>
#include <string.h>
#include <iostream>
#include <cmath>
using namespace std;

//========================================================
// default constructor
//========================================================
Complex::Complex() {
    a = 0;
    b = 0;
}


//================================================= 
// copy constructor
// Initializes a Complex, copying the a and b of another
// Parameters:
//  c: A Complex 
// Return Value:
//  none
//================================================= 
Complex::Complex( const Complex& c )
{
    a = c.a;
    b = c.b;
}

//========================================================
// Complex(a,b) constructor
//========================================================
Complex::Complex(float real, float imaginary) {
    a = real;
    b = imaginary;
}

//======================================================
// destructor
// Does nothing useful here.  Placeholder for future
// cleanup if necessary. Destructors are more interesting
// when we have dynamic data.
// PARAMETERS:
// none
// RETURN VALUE:
// none
//======================================================
//================================================= 
// destructor
// Does nothing useful here because we have no dynamic data. Placeholder for future cleanup if necessary.
// Parameters:
//  none 
// Return Value:
//  none
//================================================= 
Complex::~Complex ()
{
}

//================================================= 
// setReal access method
// setter method for a, the real part
// Parameters:
//  r: the real number to set a to 
// Return Value:
//  Void
//================================================= 
void Complex::setReal(float r) {
    a = r;
}


//================================================= 
// getReal access method
// getter method for a, the real part
// Parameters:
//  None 
// Return Value:
//  Returns a, the real part
//================================================= 
float Complex::getReal() const {
    return a;
}

//================================================= 
// setImage
// setter method for b, the imaginary part
// Parameters:
//  r: a float to set b 
// Return Value:
//  Void
//================================================= 
void Complex::setImag(float r) {
    b = r;
}

//================================================= 
// getImag
// getter method for b, the imaginary part
// Parameters:
//  None 
// Return Value:
//  b, the imaginary part
//================================================= 
float Complex::getImag() const {
    return b;
}

//========================================================
// assignment operator
//========================================================
Complex Complex::operator= ( const Complex& c ) {
    a = c.a;
    b = c.b;
    return *this;
}

//========================================================
// addition operators
//========================================================

//========================================================
// subtraction operators
//========================================================

//========================================================
// multiplication operators
//========================================================

//========================================================
// division operators
//========================================================

//========================================================
// exponentiation
//========================================================

//========================================================
// operator~
//========================================================

//========================================================
// abs
//========================================================

//========================================================
// equality operator
//========================================================

//========================================================
// inequality operator
//========================================================

//================================================= 
// overload >> for cin
// Allows to read in complex numbers from cin
// Parameters:
//  is: The istream object 
//  c: The complex number being created
// Return Value:
//  Returns the istream object
// NOTES:
//   Only works for inputs in the form of "a+bi" with only single digits, nothing else. see ComplexADT.pdf for the other cases
//================================================= 
istream& operator>> ( istream& is, Complex& c )
{
    string s, real_str, imaginary_str;

    is >> s;  // read in the rational as string

    real_str = s.at(0);
    imaginary_str = s.at(2);

    // convert strings to ints
    c.a = stoi(real_str);
    c.b = stoi(imaginary_str);

    return is;
}

//================================================= 
// overload << for cout
// Allows for usage with cout with complex numbers
// Parameters:
//  os: The ostream object 
//  r: The complex number to print
// Return Value:
//  Returns the ostream object
//================================================= 
ostream& operator<< ( ostream& os, const Complex& c )
{
    if (c.a == 0 && c.b == 0) {
        cout << "0";
        return os;
    }

    if (c.a != 0){
        os << c.a;
    }

    if (c.a != 0 && c.b != 0 && c.b > 0) {
        os << "+";
    }

    if (c.b != 0) {
        if (c.b != 1) {
            os << c.b;
        }

        os << "i";
    }

    return os;
}
