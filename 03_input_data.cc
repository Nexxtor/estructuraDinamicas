#include <iostream>
#include <string>

int main(int argc, const char* argv[]) {
  std::string user_input;
  std::cout << "Enter your name: ";
  std::getline(std::cin, user_input);

  std::cout << "Hello, " << user_input << "!" << std::endl;

  return 0;
}
