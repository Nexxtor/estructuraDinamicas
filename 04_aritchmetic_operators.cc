#include <iostream>

int main(int argc, const char* argv[]) {
  // Declare variables with descriptive names and data types
  int number1 = 10;
  int number2 = 5;

  // Addition
  int sum = number1 + number2;
  std::cout << "Sum: " << sum << std::endl;

  // Subtraction
  int difference = number1 - number2;
  std::cout << "Difference: " << difference << std::endl;

  // Multiplication
  int product = number1 * number2;
  std::cout << "Product: " << product << std::endl;

  // Division
  int quotient = number1 / number2;
  std::cout << "Quotient: " << quotient << std::endl;

  // Modulus (remainder)
  int remainder = number1 % number2;
  std::cout << "Remainder: " << remainder << std::endl;

  // Increment and decrement
  number1++;
  std::cout << "Number1 incremented: " << number1 << std::endl;

  number2--;
  std::cout << "Number2 decremented: " << number2 << std::endl;

  return 0;
}
