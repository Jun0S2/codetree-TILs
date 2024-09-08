#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a = 13; double b = 0.165; double num=0; 
    num = a*b;
    cout << a << " * ";
    cout << fixed << setprecision(6);
    cout << b << " = " << num;
    return 0;
}