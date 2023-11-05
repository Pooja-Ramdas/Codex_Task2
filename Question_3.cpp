#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
    // Get the current time
    std::time_t currentTime = std::time(0);
    std::tm* localTime = std::localtime(&currentTime);

    // Format and display the current date and time using manipulators
    std::cout << "Current Date and Time: ";
    std::cout << std::put_time(localTime, "%Y-%m-%d %H:%M:%S") << std::endl;

    return 0;
}