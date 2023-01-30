#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void printTime(vector<int> time, int seconds) {
    bool print = false;
    cout << seconds << " sekuntia on";
    if (time[0] > 0) {
        cout << " " << time[0] << " tuntia";
    }
    if (time[1] > 0) {
        cout << " " << time[1] << " minuuttia";
    }
    if (time[2] > 0) {
        cout << " " << time[2] << " sekuntia";
    }
    cout << ".";
}

vector<int> sekunnitAjaksi(int seconds) {
    vector<int> time{ 0, 0, 0 };
    int minutes, hours, days;
    minutes = floor(seconds / (60));
    hours = floor(minutes / 60);
    time[2] = seconds % 60;
    time[1] = minutes % 60;
    time[0] = hours % 24;
    return time;
}

int main() {
    int sekunnit = 10000;
    printTime(sekunnitAjaksi(sekunnit), sekunnit);
    return 0;
}