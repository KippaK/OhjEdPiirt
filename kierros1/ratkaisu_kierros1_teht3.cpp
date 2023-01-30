#include <iostream>

using namespace std;

void printArr(int(&arr)[10]) {
	cout << arr[0];
	for (int i = 1; i < 10; i++) {
		cout << " " << arr[i];
	}
}

void plusOneArr(int (&arr)[10]) {
	for (int i = 0; i < 10; i++) {
		arr[i] += 1;
	}
	return;
}

void plusOneArr_p(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] += 1;
	}
	return;
}

int main() {
	
	int arr[10]{ 0 };
	cout << "taulukko ennen aliohjelmakutsua 1:\t";
	printArr(arr);
	cout << endl;
	plusOneArr(arr);
	
	cout << "taulukko aliohjelmakutsun 1 jalkeen:\t";
	printArr(arr);
	cout << endl << endl;

	cout << "taulukko ennen aliohjelmakutsua 2:\t";
	printArr(arr);
	cout << endl;
	int arrSize = sizeof(arr) / 4;
	plusOneArr_p(arr, arrSize);

	cout << "taulukko aliohjelmakutsun 2 jalkeen:\t";
	printArr(arr);
	cout << endl;
	return 0;
}