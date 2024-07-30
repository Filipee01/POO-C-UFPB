#include <iostream>

using namespace std;

int main() {
    double x;
    double y;
    cout << "Enter a values for x and y: " <<endl;
    cin >> x;
    cin >> y;
    double value = x * y;
    cout << "The values was x = " << x <<endl;
    cout << "and y = " << y <<endl;
    cout << "The result of multiply was = " << value;
    return 0;
}