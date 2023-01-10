//input 5 values 
// then have the code will output the values from least to greatest

#include <iostream>

using namespace std;

int main() {

	const int numArraySize = 5;
	int num[numArraySize];
	int a, b;

	for (int i = 0; i < numArraySize; i++) {  //index is address of array
		cin >> a;
		num[i] = a;
	}
	for (int i = 0; i < numArraySize; i++) { //debugger to see output current values
		cout << "counter:  " << i << ", " << num[i] << endl;
	}
	cout << "\n"; //seperate before sort and after sort
	for (int i = 0; i < numArraySize - 1; i++) { //outer loop
		for (int x = i + 1; x < numArraySize; x++) { //inner loop
			if (num[i] > num[x]) {
				b = num[i]; //b is placeholder
				num[i] = num[x]; //copying value of num[x] and assigning it to num[i] (num[i]'s new value)
				num[x] = b; //now copying the value of b place holder (which was initially assigned on line 28) to num[x], basically switching places
			}
		}
	}
	for (int i = 0; i < numArraySize; i++) {
		cout << "counter:  " << i << ", " << num[i] << endl; //debugger to see output current values
	}

	return (0);
}