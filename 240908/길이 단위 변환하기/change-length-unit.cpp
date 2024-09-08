#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(1);
    double in_feet = 9.2; double feet = 30.48; double mi = 160934; double in_mi = 1.3;
    cout << in_feet << "ft = " << (in_feet*feet) <<"cm\n";
    cout << in_mi << "mi = " << (in_mi*mi) << "cm";
    return 0;
}