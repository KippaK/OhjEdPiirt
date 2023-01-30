#include <iostream>
#include <cmath>

using namespace std;

void printArr(int(&arr)[10]) {
	cout << arr[0];
	for (int i = 1; i < 10; i++) {
		cout << " " << arr[i];
	}
}

void reverseArr(int *arr, int size) {
	size -= 1;
	for (int i = 0; i < floor(size/2); i++){
		int z = *(arr + i);
		*(arr + i) = *(arr + size - i);
		*(arr + size - i) = z;
	}
}

int main() {
	int arr[10]{ 0 };
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}
	int arrSize = sizeof(arr) / sizeof(int);
	cout << "Taulukko ennen kaantoa:\t\t";
	printArr(arr);
	cout << endl;
	reverseArr(arr, arrSize);
	cout << "Taulukko kaannon jalkeen:\t";
	printArr(arr);
	cout << endl;

}