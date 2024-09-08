#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    
    for (int i = 1 ; i <=10 ; i++) {
        int temp= 0;
        cin >> temp;
        if(i==3 || i==5 || i== 10) {
            sum += temp;
        }
    }
    cout <<sum;
    return 0;
}