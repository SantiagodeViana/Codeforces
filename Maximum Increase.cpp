#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	int array [size];
	for (int i = 1; i <= size; i++){
        cin >> array [i];}
	int length, maxlength;
	for (int i = 1; i <= size; i++){
        if (array [i] > array [i-1]){
           length += 1;
		}else{
		   maxlength = length;
		   length = 1;
		} 		
	}
	cout << maxlength;
	return 0;
}
