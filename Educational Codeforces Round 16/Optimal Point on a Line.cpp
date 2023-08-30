#include <iostream>
#include <math.h> 
using namespace std;

int main ()
{    
     int n, min1, min2, distance;
     cin >> n;
     for (int i = 0; i < n; i++){
         int x;         
         cin >> x;
         if (x < min2) x = min2;
         if (min2 < min1) min2 = min1;
         }
     distance = sqrt((min2-min1)*(min2-min1));
     cout << distance << " " << min2 << " " << min1;
     return 0;
}
