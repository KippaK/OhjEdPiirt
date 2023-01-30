#include <iostream>

using namespace std;

int main() {
	
	int x;
	int *x_p = &x;
	*x_p = 7;
	int *y_p;
	y_p = nullptr;

	cout << "muuttuja_p = " << x_p << endl;
	cout << "muuttuja = " << x << endl;
	cout << "&muuttuja_P = " << &x_p << endl;
	cout << "&muuttuja = " << &x << endl;
	cout << "*&muuttuja = " << *&x << endl;
	cout << "&*muuttuja_p = " << &*x_p << endl;
	cout << "sizeof(muuttuja) = " << sizeof(x) << endl;
	cout << "sizeof(muuttuja_p) = " << sizeof(x_p) << endl;
	*y_p = 5;

	return 0;
}