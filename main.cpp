#include <iostream>
using namespace std;

int main(){
	int x = 99;
	int y = 13;


	int* x_p = &x;
	int* y_p = &y;
	int temp = *x_p;

	*x_p = *y_p;
	*y_p = temp;

	cout << "The numbers are reversed: " << x << " " << y << endl;

}