#include <iostream>
#include <iomanip> //for setprecision function
#include <ctime>

int main() {

    // nullptr: Not interested in storing the result in a specific variable, but you still want to get the current time
    std::time_t currentTime = std::time(nullptr);

    // Convert the current time to a string
    char* timeString = std::ctime(&currentTime);
    std::cout << "Current time: " << timeString;

    // Extracting components of time (using * to struct tm)
    std::tm* timeInfo = std::localtime(&currentTime);
    int year = timeInfo->tm_year + 1900; // tm_year is year since 1900
    int month = timeInfo->tm_mon + 1; // tm_mon is 0-indexed
    int day = timeInfo->tm_mday; //-> member access operator for pointers. It is used to access a member of a structure or class
    int hour = timeInfo->tm_hour;
    int minute = timeInfo->tm_min;
    int second = timeInfo->tm_sec;

    std::cout << "Year: " << year << std::endl;
    std::cout << "Month: " << month << std::endl;
    std::cout << "Day: " << day << std::endl;
    std::cout << "Hour: " << hour << std::endl;
    std::cout << "Minute: " << minute << std::endl;
    std::cout << "Second: " << second << std::endl;

    // Formatting time
    char formattedTime[50];
    std::strftime(formattedTime, sizeof(formattedTime), "%Y-%m-%d %H:%M:%S", timeInfo); //strftime - string format time
    std::cout << "Formatted time: " << formattedTime << std::endl;

    //processor time consumed by the program / (clock ticks per second)
    clock_t start = clock();
    clock_t end = clock();
    double cpuTime = (end - start) / CLOCKS_PER_SEC;
    std::cout << "cpuTimeUsed: " << cpuTime << " seconds" << std::endl; 
    std::cout << "cpuTimeUsed: " << std::setprecision(10) << cpuTime<< " seconds" << std::endl; 


    //difftime; difference between 9am one day and 9pm next day (not clock seconds)
    //didn't work, but will check again later

    struct tm startTM = {};
    startTM.tm_hour= 9; // 9am
    time_t startTime = mktime(&startTM);

    //check
    if (startTime == -1) {
    std::cout << "Invalid start time." << std::endl;
    return 1;
    }
    std::cout << "startTime: " << startTime << std::endl;

    struct tm endTM = startTM;
    endTM.tm_hour= 21; // 9pm next day
    endTM.tm_mday += 1;
    time_t endTime = mktime(&endTM);

    //check
    if (endTime == -1) {
    std::cout << "Invalid end time." << std::endl;
    return 1;
    }
    std::cout << "endTime: " << endTime << std::endl;


    double timeDiffExample = difftime(endTime, startTime);

    std::cout << "timeDiffExample: " << timeDiffExample << " seconds" << std::endl; 

    return 0;
}

/*
Notes:
- Time and mktime(make time) returns current calendar time - number of seconds 
since the epoch (00:00:00 Coordinated Universal Time (UTC), January 1, 1970)

- mktime performs the conversion from the components in a struct tm to a single time_t value

- Normalizes time values, adjusting them to valid ranges, 
considering leap years, daylight saving time, and other time-related adjustments during the conversion

- std::chrono gives precise times

- If both startTime and endTime are returning -1 after the mktime calls,
it indicates that the conversion of the struct tm values to time_t failed

- For example If adding 1 to the day exceeds the maximum number of days in the month, 
it could result in an invalid date.

*/
