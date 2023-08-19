#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, k, answer, divisors;
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        if (i % n == 0){
            (divisors++);
        if (divisors == 1){
            answer = i;                    
        }
    if (i < k){
        answer = -1;}
    }            
    cout << answer;
    return 0;
        }
}