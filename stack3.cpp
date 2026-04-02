#include <iostream>
#include <ctime>   // time এবং date functions এর জন্য
using namespace std;

// ক্লাস t (time)
class t {
private:
    int hour, minute, second;
public:
    // Constructor time parameter দিয়ে
    t(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    void showTime() {
        cout << "Time: ";
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

// ক্লাস d (date)
class d {
private:
    int day, month, year;
public:
    d(int dd, int mm, int yy) {
        day = dd;
        month = mm;
        year = yy;
    }

    void showDate() {
        cout << "Date: ";
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    // system থেকে current time এবং date নেওয়া
    time_t now = time(0);           // current time in seconds
    tm *ltm = localtime(&now);      // local time struct

    // t এবং d object তৈরি
    t currentTime(ltm->tm_hour, ltm->tm_min, ltm->tm_sec);
    d currentDate(ltm->tm_mday, 1 + ltm->tm_mon, 1900 + ltm->tm_year);

    // display
    currentTime.showTime();
    currentDate.showDate();

    return 0;
}
