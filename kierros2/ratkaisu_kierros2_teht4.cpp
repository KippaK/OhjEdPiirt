#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime_all(int num) {
	if (num == 2) {
		return true;
	}

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

bool isPrime_half(int num) {
	if (num == 2) {
		return true;
	}

	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

bool isPrime_square_root(int num) {
	if (num == 2) {
		return true;
	}

	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

void printPrimeStats(int primeCount) {
	cout << "Valilla 1-10000 on " << primeCount << " alkulukua" << endl;
	cout << "Alkulukujen osuus kaikista luvuista on " << primeCount / 100 << "%." << endl;
}

int main() {

	int primeCount = 0;

	for (int i = 2; i <= 10000; i++) {
		if (isPrime_all(i)) {
			primeCount++;
		}
	}
	cout << "isPrime_all(num)" << endl;
	printPrimeStats(primeCount);
	cout << endl;

	primeCount = 0;

	for (int i = 2; i <= 10000; i++) {
		if (isPrime_half(i)) {
			primeCount++;
		}
	}
	cout << "isPrime_half(num)" << endl;
	printPrimeStats(primeCount);
	cout << endl;

	primeCount = 0;

	for (int i = 2; i <= 10000; i++) {
		if (isPrime_square_root(i)) {
			primeCount++;
		}
	}
	cout << "isPrime_square_root(num)" << endl;
	printPrimeStats(primeCount);
	cout << endl;

	return 0;
}