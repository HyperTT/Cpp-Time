#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int hours, minutes, seconds;
    cout << "Enter a time value in the following format: HH MM SS\n";
    cin >> hours >> minutes >> seconds;
    if (hours < 0 || hours > 23)
    {
        cout << "Hour must be between 0 and 23 inclusive.";
    }
    else if (hours >= 0 && hours <12)
    {
        if (hours == 0)
        {
            cout << setw(2) << setfill('0') << "12:";
            cout << setw(2) << setfill('0') << minutes << ":";
            cout << setw(2) << setfill('0') << seconds;
            cout << "AM\n";
        }
        else
        {
            cout << setw(2) << setfill('0') << hours << ":";
            cout << setw(2) << setfill('0') << minutes << ":";
            cout << setw(2) << setfill('0') << seconds;
            cout << "AM\n";
        }

    }
    else
    {
        if (hours == 12)
        {
            cout << setw(2) << setfill('0') << "12:";
            cout << setw(2) << setfill('0') << minutes << ":";
            cout << setw(2) << setfill('0') << seconds;
            cout << "PM\n";
        }
        else
        {
            hours = hours - 12;
            cout << setw(2) << setfill('0') << hours <<":";
            cout << setw(2) << setfill('0') << minutes << ":";
            cout << setw(2) << setfill('0') << seconds;
            cout << "PM\n";
        }

    }
    return 0;
}
