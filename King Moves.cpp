#include <iostream>
#include <string>
using namespace std;

int main ()
{    
    bool sides, up;
    sides = false;
    up = false;
    int moves = 8;
    string position;
    cin >> position;
    if (position.substr (0,1) == "a" || position.substr (0,1) == "h") up = true;
    if (position.substr (1,1) == "1" || position.substr (1,1) == "8") sides = true;
    if (sides == true && up == true) moves -=5;
    else if (sides == true || up == true) moves -=3;
    cout << moves;
    return 0;
}
