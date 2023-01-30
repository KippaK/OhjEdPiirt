#include <iostream>

using namespace std;

struct aika_ty {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    aika_ty time;
    for (;;){
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
    cout << time.hours << ":" << time.minutes << ":" << time.seconds << endl;
    aika_ty* time_p = &time;
    cout << (*time_p).hours << ":" << (*time_p).minutes << ":" << (*time_p).seconds << endl;

    aika_ty time2, time3;
    time2.hours = 2, time2.minutes = 3, time2.seconds = 50;
    time3.hours = 2, time3.minutes = 3, time3.seconds = 50;
    if (time2.hours == time3.hours && time2.minutes == time3.minutes && time2.seconds == time3.seconds) {
        cout << "Sisallot ovat samat." << endl;
    }

    return 0;
}