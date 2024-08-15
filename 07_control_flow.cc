#include <iostream>

// Function to determine if a number is even or odd.
void PrintEvenOrOdd(int number) {
  if (number % 2 == 0) {
    std::cout << number << " is even." << std::endl;
  } else {
    std::cout << number << " is odd." << std::endl;
  }
}

// Function to categorize a number.
void CategorizeNumber(int number) {
  if (number > 0) {
    std::cout << number << " is positive." << std::endl;
  } else if (number < 0) {
    std::cout << number << " is negative." << std::endl;
  } else {
    std::cout << number << " is zero." << std::endl;
  }
}

// Function to demonstrate switch-case statement.
void PrintDayOfWeek(int day) {
  switch (day) {
    case 1:
      std::cout << "Monday" << std::endl;
      break;
    case 2:
      std::cout << "Tuesday" << std::endl;
      break;
    case 3:
      std::cout << "Wednesday" << std::endl;
      break;
    case 4:
      std::cout << "Thursday" << std::endl;
      break;
    case 5:
      std::cout << "Friday" << std::endl;
      break;
    case 6:
      std::cout << "Saturday" << std::endl;
      break;
    case 7:
      std::cout << "Sunday" << std::endl;
      break;
    default:
      std::cout << "Invalid day" << std::endl;
      break;
  }
}

int main(int argc, const char* argv[]) {
  int number;

  std::cout << "Enter an integer: ";
  std::cin >> number;

  PrintEvenOrOdd(number);
  CategorizeNumber(number);

  int day;
  std::cout << "Enter a day of the week (1-7): ";
  std::cin >> day;

  PrintDayOfWeek(day);

  return 0;
}
