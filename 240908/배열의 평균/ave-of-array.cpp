#include <iostream>
#include <iomanip> // setprecision을 사용하기 위해 추가
#include <array>
using namespace std;

double calculateVerAverage (int n, int arr[][4]){
    double sum = 0 ;
    for (int i = 0 ; i < 2 ; i ++ ){
        sum += arr[i][n];
    }
    return sum/2;
}

double calculateHorAverage(int n, int arr[][4]) {
    double sum = 0;
    for (int i = 0 ; i< 4 ; i++) {
        sum += arr[n][i];
    }
    return (sum/4);
}

int main() {
    int arr[2][4];  
    double totalSum=0;
    for (int i =0; i<2; i++){
        for (int j =0; j<4; j++) {
            cin >> arr[i][j];
            totalSum += arr[i][j];
        }
    }

    // horizontal 
    cout << fixed << setprecision(1);
    cout << calculateHorAverage(0,arr) << " " << calculateHorAverage(1,arr);
    cout << '\n';
    for (int i = 0 ; i < 4; i ++) {
        cout << calculateVerAverage(i,arr) << " ";
    }
    cout << '\n';
    cout << (totalSum/8);
    return 0;
}