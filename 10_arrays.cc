#include <iostream>

const int kArraySize = 5;

// A simple function to print the elements of an array.
void PrintArray(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    std::cout << "Element at index " << i << " is " << arr[i] << std::endl;
  }
}

// A simple function to fill the elements of an array with a sequence from one
// to size
void FillArray(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    arr[i] = i + 1;
  }
}

int main(int argc, const char* argv[]) {
  // Declare and initialize an array of kArraySize elements
  int numbers[kArraySize] = {1, 2, 3, 4, 5};

  std::cout << "Numbers array elements:" << std::endl;
  PrintArray(numbers, kArraySize);

  // Declare an array of kArraySize elements
  int numbers2[kArraySize];

  FillArray(numbers2, kArraySize);
  std::cout << "Numbers2 array elements:" << std::endl;
  PrintArray(numbers2, kArraySize);

  // Calculate de summation of all arrays elements
  // With sugar syntax
  int sum = 0;
  for (int number : numbers) {
    sum += number;
  }
  std::cout << "The summation is: " << sum << std::endl;

  return 0;
}
