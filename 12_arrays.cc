#include <array>
#include <iostream>

int main(int argc, char* argv[]) {
  // Initialize an array with values
  std::array<int, 5> numbers = {1, 2, 3, 4, 5};

  // Access elements
  std::cout << "First element: " << numbers.front() << std::endl;
  std::cout << "Last element: " << numbers.back() << std::endl;

  // Modify array
  numbers[2] = 10;
  numbers.fill(7);  // Fill the array with 7s
  std::cout << "Modified array: ";
  for (int number : numbers) {
    std::cout << number << " ";
  }
  std::cout << std::endl;

  // Swap with another array
  std::array<int, 5> other_numbers = {9, 8, 7, 6, 5};
  numbers.swap(other_numbers);
  std::cout << "Array after swap: ";
  for (int number : numbers) {
    std::cout << number << " ";
  }
  std::cout << std::endl;

  return 0;
}
