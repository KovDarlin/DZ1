#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Enter the first number: ";
	cin >> x;
	int y;
	cout << "Enter the second number: ";
	cin >> y;

	int* x_p = &x;
	int* y_p = &y;

	if (*x_p > *y_p) {
		cout << *x_p << " more and " << *y_p << " less." << endl;
	}
	else {
		cout << *y_p << " more and " << *x_p << " less." << endl;
	}

}