﻿#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r1;
    double r2;
    double x;
    double y;

    cout << "r_1 = "; cin >> r1;
    cout << "r_2 = "; cin >> r2;
    cout << "x = "; cin >> x;

    if (x < (-2 * r1)) {
        y = (x + 1 + (2 * r1)) * (-r1) + r1;
    }
    else if (x >= (-2 * r1) && x <= 0) {
        y = sqrt(r1 * r1 - pow((x + r1), 2));
    }
    else if (x > 0 && x < 2 * r2) {
        y = -sqrt(r2 * r2 - pow((x - r2), 2));
    }
    else if (x >= 2*r2 && x <= 6) {
        y = (x - 2 * r2) / (6 - 2 * r2);
    }
    else {
        y = -1;
    }

    cout << "y = " << y;
    
    return 0;
}


