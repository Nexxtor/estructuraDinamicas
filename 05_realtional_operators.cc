#include <iostream>

int main(int argc, const char* argv[]) {
  int number1 = 10;
  int number2 = 5;
  bool isTrue;

  std::cout << std::boolalpha;
  
  // Equal to (==)
  isTrue = number1 == number2;
  std::cout << "Number1 is equal to number2: " << isTrue << std::endl;

  // Not equal to (!=)
  isTrue = number1 != number2;
  std::cout << "Number1 is not equal to number2: " << isTrue << std::endl;

  // Greater than (>)
  isTrue = number1 > number2;
  std::cout << "Number1 is greater than number2: " << isTrue << std::endl;

  // Greater than or equal to (>=)
  isTrue = number1 >= number2;
  std::cout << "Number1 is greater than or equal to number2: " << isTrue << std::endl;

  // Less than (<)
  isTrue = number1 < number2;
  std::cout << "Number1 is less than number2: " << isTrue << std::endl;

  // Less than or equal to (<=)
  isTrue = number1 <= number2;
  std::cout << "Number1 is less than or equal to number2: " << isTrue << std::endl;

  return 0;
}

