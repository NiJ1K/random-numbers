//#include <iostream>
//
//int main() {
//    int x1, y1, x2, y2;
//
//    std::cout << "Enter the coordinates of the first point (x1, y1): ";
//    std::cin >> x1 >> y1;
//
//    std::cout << "Enter the coordinates of the second point (x2, y2): ";
//    std::cin >> x2 >> y2;
//
//    if (x1 == x2) {
//        std::cout << "The line is parallel to the y-axis." << std::endl;
//    }
//    else {
//        std::cout << "The line is not parallel to the y-axis." << std::endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    double number;
//
//    std::cout << "Enter a number: ";
//    std::cin >> number;
//
//    int integerPart = static_cast<int>(number);
//    double fractionalPart = number - integerPart;
//
//    if (fractionalPart != 0.0) {
//        std::cout << "The entered number has a fractional part." << std::endl;
//    }
//    else {
//        std::cout << "The entered number does not have a fractional part." << std::endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int hours, minutes, seconds;
//    std::cout << "Enter the current time (hours, minutes, seconds): ";
//    std::cin >> hours >> minutes >> seconds;
//    bool isTimeValid = true;
//
//    if (hours < 0 || hours > 23) {
//        isTimeValid = false;
//    }
//
//    if (minutes < 0 || minutes > 59) {
//        isTimeValid = false;
//    }
//
//    if (seconds < 0 || seconds > 59) {
//        isTimeValid = false;
//    }
//    if (isTimeValid) {
//        std::cout << "The time is valid." << std::endl;
//    }
//    else {
//        std::cout << "The time is invalid." << std::endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int ticketNumber;
//
//    std::cout << "Enter a six-digit ticket number (from 000000 to 999999): ";
//    std::cin >> ticketNumber;
//
//    if (ticketNumber < 0 || ticketNumber > 999999) {
//        std::cout << "Invalid ticket number." << std::endl;
//        return 0;
//    }
//
//    int digit1 = ticketNumber / 100000;
//    int digit2 = (ticketNumber / 10000) % 10;
//    int digit3 = (ticketNumber / 1000) % 10;
//    int digit4 = (ticketNumber / 100) % 10;
//    int digit5 = (ticketNumber / 10) % 10;
//    int digit6 = ticketNumber % 10;
//
//    if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6) {
//        std::cout << "The ticket is lucky." << std::endl;
//    }
//    else {
//        std::cout << "The ticket is not lucky." << std::endl;
//    }
//
//    return 0;
//}