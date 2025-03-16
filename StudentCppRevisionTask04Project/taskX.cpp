#include "tasks.h"
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

string taskX(int number) {
    if (number < 0 || number >= 86400) {
        return "error"; 
    }

    int hours = number / 3600;          
    int minutes = (number % 3600) / 60; 
    int seconds = number % 60;          

   
    ostringstream timeStream;
    timeStream << hours << ":"
        << setw(2) << setfill('0') << minutes << ":"
        << setw(2) << setfill('0') << seconds;

    return timeStream.str();
}
