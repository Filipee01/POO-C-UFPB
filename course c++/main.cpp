#include <iostream>

using namespace std;

int main() {
   double sales = 95000;
    double state_taxRate = .04;
    double state_tax = sales * state_taxRate;
    double country_taxRate = .02;
    double country_tax = sales * country_taxRate ;
    double total = state_tax + country_tax;
    cout << "The sales was = $" << sales <<endl;
    cout << "The state_tax was = $" << state_tax <<endl;
    cout << "The country_tax was = $" << country_tax << endl;
    cout << "The total was = $" << total;
    return 0;
}

