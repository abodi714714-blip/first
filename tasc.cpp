#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
int hours, minutes, seconds;
cout << "Enter hours: ";
cin >> hours;
cout << "Enter minutes: "; 
cin >> minutes;
cout << "Enter seconds: ";
cin >> seconds;
while (1) {
  system("clear");
  if(seconds > 59) {
    minutes++;
    seconds=0;

  }
  if (minutes > 59) {
    hours++;
    minutes=0;
  }
  if (hours > 23) {
    hours=0;
  }
  cout<< hours << ":" << minutes << ":" << seconds << endl;
  seconds++;
  sleep(1);

}

  return 0;
}
