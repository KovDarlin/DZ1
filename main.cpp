#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Enter the first number: ";
	cin >> x;
	char op;
	cout << "Enter an operation +, -, *, /: ";
	cin >> op;
	int y;
	cout << "Enter the second number: ";
	cin >> y;
	int res;

	int* x_p = &x;
	int* y_p = &y;
	int* res_p = &res;

	if (op == '+') {
		*res_p = *x_p + *y_p;
	}
	else if (op == '-') {
		*res_p = *x_p - *y_p;
	}
	else if (op == '*') {
		if (*x_p != 0 && *y_p != 0) {
			*res_p = *x_p * *y_p;
		}
		else {
			*res_p = 0;
		}
	}
	else if (op == '/') {
		if (*x_p != 0 && *y_p != 0) {
			*res_p = *x_p / *y_p;
		}
		else {
			cout << "Cannot be divided by zero!" << endl;
		}
	}
	else {
		cout << "Invalid operator!" << endl;
	}

	cout << "Result: " << *res_p << endl;
}