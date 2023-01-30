#include <iostream>
#include <cmath>

using namespace std;

int min(int x, int y) {
	if (x < y) {
		return x;
	}
	return y;
}

int min(int x, int y, int z) {
	if (x < min(y, z)) {
		return x;
	}
	return min(y, z);
}

int min(int x, int y, int z, int w) {
	if (min(x, y) < min(z, w)) {
		return min(x, y);
	}
	return min(z, w);
}


int main() {
		
	int x = 4, y = 3, z = 2, w = 1;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << "w = " << w << endl;
	cout << "min(x,y) = " << min(x, y) << endl;
	cout << "min(x,y,z) = " << min(x, y, z) << endl;
	cout << "min(x,y,z,w) = " << min(x, y, z, w) << endl;


	return 0; 
}