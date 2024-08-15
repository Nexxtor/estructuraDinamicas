#include <iostream>

int main(int argc, const char* argv[]) {
  int number1 = 10;
  int number2 = 5;
  bool isEven, isAdult;

  std::cout << std::boolalpha;

  // Logical AND (&&)
  isEven = (number1 % 2 == 0) && (number2 % 2 == 0);
  std::cout << "Both numbers are even: " << isEven << std::endl;

  // Logical OR (||)
  isAdult = number1 >= 18 || number2 >= 18;
  std::cout << "At least one person is an adult: " << isAdult << std::endl;

  // Logical NOT (!)
  isEven = !(number1 % 2 == 0);
  std::cout << "Number1 is not even: " << isEven << std::endl;

  return 0;
}
