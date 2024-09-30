#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Enter the number: ";
	cin >> x;

	int* x_p = &x;

	if (*x_p > 0) {
		cout << *x_p << " the number is positive " << endl;
	}
	else if (*x_p < 0) {
		cout << *x_p << " the number is negative " << endl;
	}
	else {
		cout << *x_p << " the number is zero " << endl;
	}
}