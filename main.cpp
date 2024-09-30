#include <iostream>
using namespace std;

int main(){
	const int elements = 5;
	int masiv[elements] = { 10, 4, 26, 2, 18 };

	int* masiv_p = masiv;
	int sum = 0;


	for (int i = 0; i < elements; i++) {
		sum += *masiv_p;
		masiv_p++;
	}

	cout << "The sum of array elements: " << sum << endl;
}