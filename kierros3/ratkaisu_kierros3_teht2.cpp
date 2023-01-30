#include <iostream>

using namespace std;

int aikaSekunneiksi(int hours, int minutes, int seconds) {
    minutes = hours * 60 + minutes;
    return minutes * 60 + seconds;
}

int main() {
    int tunnit = 3;
    int minuutit = 20;
    int sekunnit = 45;
    int sekunnitTotal = aikaSekunneiksi(tunnit, minuutit, sekunnit);
    cout << tunnit << " tuntia ";
    cout << minuutit << " minuuttia ";
    cout << sekunnit << " sekuntia on ";
    cout << sekunnitTotal << ".";

    return 0;
}