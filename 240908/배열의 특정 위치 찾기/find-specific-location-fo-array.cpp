#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double avg = 0;
    int sum =0;
    for(int i = 1 ; i <= 10 ; i++) {
        int temp = 0 ;
        cin >> temp;
        if(i%2==0) sum += temp;
        if(i%3==0) avg += temp;
    }
    cout << sum <<" ";
    avg/=3;
    cout << fixed << setprecision(1) << avg;
    
    return 0;
}