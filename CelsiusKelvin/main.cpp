//
//  main.cpp
//  CelsiusKelvin
//
//  Created by Brent Perry on 7/12/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

double ctok(double c)
{
    if (c < - 273.15) throw exception();
    double k = c + 273.15;
    return k;
}

double ktoc(double k)
{
    if (k < 0) throw exception();
    double c = k - 273.15;
    return c;
}

double ctof(double c)
{
    double f = 9.0 / 5 * c + 32;
    return f;
}

double ftoc(double f)
{
    double c = (f - 32) * (5 / 9);
    return c;
}

double ktof(double k)
{
    if (k < 0) throw exception();
    double f = (k * (9 / 5)) - 459.67;
    return f;
}

double ftok(double f)
{
    if (f < - 459.67) throw exception();
    double k = (f + 459.67) * (5 / 9);
    return k;
}

int main()
{
    double temp;
    char start_unit, end_unit;
    
    cout << "Please enter a temperature, a starting unit, and the unit to convert to.\n";
    cout << "Use ('c', 'k' or 'f') separated by a space: ";
    cin >> temp >> start_unit >> end_unit;
    cout << '\n';
    
    switch (start_unit) {
        case 'c':
            if (end_unit == 'k') {
                try {
                    double k = ctok(temp);
                    cout << k << '\n';
                }
                catch (...) {
                    cout << "Temp must be at least -273.15.\n";
                    return 1;
                }
            } else if (end_unit == 'f') {
                double f = ctof(temp);
                cout << f << '\n';
            } else {
                cout << "Invalid entry for unit to convert to.\n";
            }
            break;
            
        case 'k':
            if (end_unit == 'c') {
                try {
                    double c = ktoc(temp);
                    cout << c << '\n';
                }
                catch (...) {
                    cout << "Temp must be at least 0.\n";
                    return 1;
                }
            } else if (end_unit == 'f') {
                try {
                    double f = ktof(temp);
                    cout << f << '\n';
                }
                catch (...) {
                    cout << "Temp must be at least 0.\n";
                    return 1;
                }
            } else {
                cout << "Invalid entry for unit to convert to.\n";
            }
            break;
            
        case 'f':
            if (end_unit == 'c') {
                double c = ftoc(temp);
                cout << c << '\n';
            } else if (end_unit == 'k') {
                try {
                    double k = ftok(temp);
                    cout << k << '\n';
                }
                catch (...) {
                    cout << "Temp must be at least -459.67.\n";
                    return 1;
                }
            } else {
                cout << "Invalid entry for unit to convert to.\n";
            }
            break;
        
        default:
            cout << "Invalid entry for starting unit.\n";
            break;
    }
    
    
    
    
    
}
