#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a = 5.26; double b = 8.27; double res = a*b;
    cout << fixed << setprecision(3)  << res;
    return 0;
}