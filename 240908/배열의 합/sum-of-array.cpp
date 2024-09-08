#include <iostream>
using namespace std;

int getSum() {
    int temp = 0;
    int temp_sum = 0;
    for (int i = 0; i <4 ; i++) {
        cin >> temp;
        temp_sum += temp;
    }
    return temp_sum;
}
int main() {
    for (int i = 0; i <4 ; i++) {
        int sum = getSum();
        cout << sum << "\n";
    }
    
    return 0;
}