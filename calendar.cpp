#include <iostream>
using namespace std;

int main() {
    int start, days;
    do {
        cout << "Enter starting day (1-7): ";
        cin >> start;
    } while (start < 1 || start > 7);
    
    do {
        cout << "Enter number of days: ";
        cin >> days;
    } while (days < 28 || days > 31);

    cout << "Sun\tMon\tTue\tWed\tThu\tFri\tSat\n";

    for (int i = 0; i < start; i++) {
        if (i == 0) {
            continue;
        }
        cout << "\t";
    }

    for (int i = 1; i <= days; i++) {
        cout << i << "\t";
        start += 1;
        if (start == 8) {
            start=1;
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}