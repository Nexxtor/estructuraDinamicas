#include <array>
#include <iostream>

// Function to print the elements of a std::array
void PrintArray(const std::array<int, 5>& arr) {
  // Range-for loop to iterate over the array elements
  for (int number : arr) {
    std::cout << number << " ";
  }
  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  // Define a std::array with 5 elements
  std::array<int, 5> numbers = {1, 2, 3, 4, 5};

  // Access array elements using indices
  std::cout << "Element at index 0: " << numbers[0] << std::endl;
  std::cout << "Element at index 4: " << numbers[4] << std::endl;

  // Modify an element of the array
  numbers[2] = 10;
  std::cout << "Modified array: ";
  PrintArray(numbers);

  // Using std::array methods
  std::cout << "First element: " << numbers.front() << std::endl;
  std::cout << "Last element: " << numbers.back() << std::endl;
  std::cout << "Array size: " << numbers.size() << std::endl;

  // Return value indicating successful completion
  return 0;
}
