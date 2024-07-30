#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.14;
    double radius;
    cout << "write the value of the radius to calculate the area of the circle:" <<endl;
    cin >> radius;
    double result = pi * pow(radius, 2);
    cout <<"The ray was: " << result;

    return 0;
}