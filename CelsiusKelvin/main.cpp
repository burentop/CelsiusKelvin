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
    if (c < -273.15) throw exception();
    int k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;
    cin >> c;
    try {
        double k = ctok(c);
        cout << k << '\n';
    }
    catch (...) {
        cout << "Temp must be at least -273.15.\n";
        return 1;
    }
    
}
