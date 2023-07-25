#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int min;
    int sec;

public:
    
    Time(int h = 0, int m = 0, int s = 0) : hour(h), min(m), sec(s) {}

    
    void read() {
        cout << "Enter hours: ";
        cin >> hour;

        cout << "Enter minutes: ";
        cin >> min;

        cout << "Enter seconds: ";
        cin >> sec;
    }

    
    void display() {
        cout << hour << "h " << min << "m " << sec << "s";
    }

    // Function to add two Time objects
    Time add(Time t) {
        Time result;
        result.sec = sec + t.sec;
        result.min = min + t.min + result.sec / 60;
        result.hour = hour + t.hour + result.min / 60;
        result.sec %= 60;
        result.min %= 60;
        return result;
    }

    
    Time diff(Time t) {
        Time result;
        int thisTotalSecs = hour * 3600 + min * 60 + sec;
        int otherTotalSecs = t.hour * 3600 + t.min * 60 + t.sec;
        int diffSecs = thisTotalSecs - otherTotalSecs;
        if (diffSecs < 0)
            diffSecs += 86400; 

        result.hour = diffSecs / 3600;
        diffSecs %= 3600;
        result.min = diffSecs / 60;
        result.sec = diffSecs % 60;
        return result;
    }
};

int main() {
    Time t1, t2, sum, diff;

    cout << "Enter Time 1:\n";
    t1.read();

    cout << "Enter Time 2:\n";
    t2.read();

    
    sum = t1.add(t2);

    
    diff = t1.diff(t2);

    cout << "\nTime 1: ";
    t1.display();
    cout << "\nTime 2: ";
    t2.display();
    cout << "\nSum of times: ";
    sum.display();
    cout << "\nDifference of times: ";
    diff.display();

    return 0;
}
