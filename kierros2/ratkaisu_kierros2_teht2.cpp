#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float num;
	
	cout << "Anna luku: ";
	cin >> num;
	cout << "Luku " << num << " sisaltyy valille [ " << floor(num) << ", " << ceil(num) << " ].";

	return 0; 
}