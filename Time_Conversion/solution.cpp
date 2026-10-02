#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

string timeConversion(string s) {
    string period = s.substr(8, 2);
    int hour = stoi(s.substr(0, 2));
    string rest = s.substr(2, 6);
    
    if (period == "AM") {
        if (hour == 12) hour = 0;
    } else {
        if (hour != 12) hour += 12;
    }
    
    ostringstream oss;
    oss << setfill('0') << setw(2) << hour << rest;
    return oss.str();
}
