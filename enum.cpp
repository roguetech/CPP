#include <iostream>

using namespace std;

int main(){
  //enum day_of_week { Mon, Tues, Weds, Thurs, Fri, Sat, Sun };

  const char* days[] = {"Sun", "Mon", "Tues", "Weds", "Thurs", "Fri", "Sat"};

  //enum day_of_week day;
  int j {};
  cout << "Please enter a number: " << endl;
  cin >> j;

  //day = (day_of_week)j;

  cout << days[j] << endl;
  //cout << day_of_week << endl;
  return 0;
}

/*
enum DayNames {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main ()
    {
    DayNames dayOfWeek;
    dayOfWeek = (DayNames)count;
    cout << dayOfWeek << " Its ";
    switch (dayOfWeek)
    {
            case Sunday: cout << "Sunday - ";
                break;
            case Monday: cout << "Monday - ";
                break;
            case Tuesday: cout << "Tuesday - ";
                break;
            case Wednesday: cout << "Wednesday - ";
                break;
            case Thursday: cout << "Thursday - ";
                break;
            case Friday: cout << "Friday - ";
                break;
            case Saturday: cout << "Saturday - ";
                break;
      }
        if ((dayOfWeek == Saturday) || (dayOfWeek == Sunday))
            cout << "its the weekend - YEAH!!! No school today!" << endl;
        else
            cout << "another day of school..." << endl;
    return 0;
    }
*/
