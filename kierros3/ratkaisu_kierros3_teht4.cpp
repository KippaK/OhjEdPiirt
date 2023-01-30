#include <iostream>

using namespace std;

struct aika_ty {
    int hours;
    int minutes;
    int seconds;
};

void printTime(aika_ty time) {
    if (time.hours > 0) {
        cout << time.hours << " tuntia ";
    }
    if (time.minutes > 0) {
        cout << time.minutes << " minuuttia ";
    }
    if (time.seconds > 0) {
        cout << time.seconds << " sekuntia ";
    }
    cout << endl;
}

int aikaSekunneiksi(aika_ty time) {
    time.minutes = time.hours * 60 + time.minutes;
    return time.minutes * 60 + time.seconds;
}

aika_ty sekunnitAjaksi(int seconds) {
    aika_ty time;
    time.minutes = floor(seconds / (60));
    time.hours = floor(time.minutes / 60);
    time.seconds = seconds % 60;
    time.minutes = time.minutes % 60;
    time.hours = time.hours % 24;
    return time;
}

aika_ty aikojen_erotus(aika_ty time1, aika_ty time2) {
    aika_ty erotus;
    int seconds1 = aikaSekunneiksi(time1);
    int seconds2 = aikaSekunneiksi(time2);
    int seconds_erotus = abs(seconds1 - seconds2);
    erotus = sekunnitAjaksi(seconds_erotus);
    return erotus;
}

aika_ty askTime() {
    aika_ty time;
    for (;;) {
        cout << "Anna tunnit: ";
        cin >> time.hours;
        if (time.hours < 24 && time.hours > -1) {
            break;
        }
        cout << "Virhe!" << endl;
    }
    for (;;) {
        cout << "Anna minuutit: ";
        cin >> time.minutes;
        if (time.minutes < 60 && time.minutes > -1) {
            break;
        }
        cout << "Virhe!" << endl;
    }
    for (;;) {
        cout << "Anna sekunnit: ";
        cin >> time.seconds;
        if (time.seconds < 60 && time.seconds > -1) {
            break;
        }
        cout << "Virhe!" << endl;
    }
    return time;
}

int main() {
    aika_ty time1 = askTime(), time2 = askTime();
    aika_ty aika_erotus = aikojen_erotus(time1, time2);
    cout << "Aika 1:" << endl;
    printTime(time1);
    cout << "Aika 2:" << endl;
    printTime(time2);
    cout << "Aikojen erotus:" << endl;
    printTime(aika_erotus);
    return 0;
}