#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{

    time_t t = time(NULL);
    tm *timePtr = localtime(&t);
    int sec = (timePtr->tm_sec);
    int min = (timePtr->tm_min);
    int hours = (timePtr->tm_hour);
    string timestr;

    if (hours > 12)
    {
        hours = hours % 12;
        timestr = "PM";
    }
    else
    {
        timestr = "AM";
    }

    while (true)
    {
        system("cls");

        cout << "\n\nProgrammopedia Clock Local time\n";
        cout << "_______________________________\n\n";
        cout << "      |" << hours << " : " << min << " : " << sec << " " << timestr << " |" << endl;
        cout << "_______________________________\n\n";

        sec++;
        if (sec > 59)
        {
            sec = 0;
            min++;
        }

        if (min > 59)
        {
            min = 0;
            hours++;
        }

        if (hours > 12)
        {
            hours = 1;
        }

        Sleep(1000);
    }

    return 0;
}
