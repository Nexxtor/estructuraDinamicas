#include <iostream>
#include <vector>

// Function to print elements of a vector.
void PrintVector(const std::vector<int>& vec) {
  for (size_t i = 0; i < vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
}

// Function to calculate the sum of elements in a vector using a range-based for
// loop.
int SumVector(const std::vector<int>& vec) {
  int sum = 0;
  for (int value : vec) {
    sum += value;
  }
  return sum;
}

// Function to demonstrate a while loop.
void PrintNumbersWhileLoop(int max) {
  int i = 0;
  while (i < max) {
    std::cout << i << " ";
    ++i;
  }
  std::cout << std::endl;
}

// Function to demonstrate a do-while loop.
void PrintNumbersDoWhileLoop(int max) {
  int i = 0;
  do {
    std::cout << i << " ";
    ++i;
  } while (i < max);
  std::cout << std::endl;
}

int main(int argc, const char* argv[]) {
  std::vector<int> numbers = {1, 2, 3, 4, 5};

  std::cout << "Vector elements: ";
  PrintVector(numbers);

  int sum = SumVector(numbers);
  std::cout << "Sum of vector elements: " << sum << std::endl;

  std::cout << "Numbers using while loop: ";
  PrintNumbersWhileLoop(5);

  std::cout << "Numbers using do-while loop: ";
  PrintNumbersDoWhileLoop(5);

  return 0;
}
