// This program calculates ocean level increases over several years.

#include <iostream>
using namespace std;

int main() {

    double RISE_PER_YEAR;

    RISE_PER_YEAR = 1.5;

    double riseInFiveYears;
    double riseInSevenYears;
    double riseInTenYears;

    riseInFiveYears = RISE_PER_YEAR * 5;
    riseInSevenYears = RISE_PER_YEAR * 7;
    riseInTenYears = RISE_PER_YEAR * 10;

    cout << "Ocean level increase after five years: " << riseInFiveYears << " mm" << endl;
    cout << "Ocean level increase after seven years: " << riseInSevenYears << " mm" << endl;
    cout << "Ocean level increase after ten years: " << riseInTenYears << " mm" << endl;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}