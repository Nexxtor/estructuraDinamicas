
#include <iostream>
#include <random>

// Generates a random integer between the given min and max values (inclusive).
int GenerateRandomNumber(int min, int max) {
  // Ensure min is less than or equal to max.
  if (min > max) {
    std::cerr << "Min should be less than or equal to Max." << std::endl;
    return -1;  // Return an error code.
  }

  // Use a random device to seed the random number generator.
  std::random_device rd;

  // Create a Mersenne Twister random number generator.
  std::mt19937 gen(rd());

  // Create a uniform integer distribution between min and max (inclusive).
  std::uniform_int_distribution<> dis(min, max);

  // Generate and return a random number.
  return dis(gen);
}

int main(int argc, const char* argv[]) {
  // Define the range for random number generation.
  const int kMin = 1;
  const int kMax = 100;

  // Generate a random number within the specified range.
  int random_number = GenerateRandomNumber(kMin, kMax);

  // Check if random number generation was successful.
  if (random_number != -1) {
    // Output the generated random number.
    std::cout << "Generated random number: " << random_number << std::endl;
  } else {
    std::cerr << "Failed to generate a random number." << std::endl;
  }

  return 0;
}
