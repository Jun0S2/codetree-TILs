#include <iostream>
#include <map>
#include <array>
using namespace std;

int main() {
    map<char,char> convert = {
        {'a','A'}, {'b','B'}, {'c','C'}, {'d','D'},
        {'e','E'}, {'f','F'}, {'g','G'}, {'h','H'},
        {'i','I'}, {'j','J'}, {'k','K'}, {'l','L'},
        {'m','M'}, {'n','N'}, {'o','O'}, {'p','P'}, 
        {'q','Q'}, {'r', 'R'}, {'s','S'}, {'t','T'},
        {'v','V'}, {'w','W'}, {'u', 'U'}, {'x','X'},
        {'y','Y'}, {'z','Z'}
    };
 
    char map[5][3];
    char input;
    for (int i = 0 ;i <5 ; i++){
        for (int j = 0; j<3; j++) {
            cin >> input;
            map[i][j] = convert[input];
        }
    }
     for (int i = 0 ;i <5 ; i++){
        for (int j = 0; j<3; j++) {
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}