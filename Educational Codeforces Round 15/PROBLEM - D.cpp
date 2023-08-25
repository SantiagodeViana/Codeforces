#include <iostream>
using namespace std;

int main() {
    int d, k, a, b, t;
    cin >> d >> k >> a >> b >> t;
    int answer;
    answer = 0;
	while (d > 0){
          d -= k;
          answer += k*a;
          if (((k*a) + t) > (d*b)){
             answer += d*b;
          }else{
             d -= k;
          }
    }
    cout << answer;
    return 0; 
}
