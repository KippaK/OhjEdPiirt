#include <iostream>

using namespace std;

void swap1(int &x, int &y) {
	int z = x;
	x = y;
	y = z;
	return;
}

void swap2(int* x, int* y) {
	int z = *x;
	*x = *y;
	*y = z;
	return;
}

int main() {
	
	int yksi = 1;
	int kaksi = 2;
	int kolme = 3;
	int nelja = 4;

	cout << "yksi = " << yksi << ", kaksi = " << kaksi << " ennen swap1:ia." << endl;
	swap1(yksi, kaksi);
	cout << "yksi = " << yksi << ", kaksi = " << kaksi << " jalkeen swap1:in." << endl;

	cout << "kolme = " << kolme << ", nelja = " << nelja << " ennen swap2:ia." << endl;
	swap2(&kolme, &nelja);
	cout << "kolme = " << kolme << ", nelja = " << nelja << " jalkeen swap12:in." << endl;


	return 0;
}