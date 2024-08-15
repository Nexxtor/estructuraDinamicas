#include <iostream>

// Constants for a simple circle geometry calculation.
constexpr double kPi = 3.14159265358979323846;
constexpr double kCircleRadius = 5.0;
constexpr double kCircleDiameter = kCircleRadius * 2.0;
const char kCircleType[] = "Circle";

// Function to calculate the area of a circle.
constexpr double CalculateArea(double radius) { return kPi * radius * radius; }

// Function to calculate the circumference of a circle.
constexpr double CalculateCircumference(double diameter) {
  return kPi * diameter;
}

// Function to print information about the circle.
void PrintCircleInfo(double radius) {
  std::cout << "Shape: " << kCircleType << std::endl;
  std::cout << "Radius: " << radius << std::endl;
  std::cout << "Diameter: " << kCircleDiameter << std::endl;
  std::cout << "Area: " << CalculateArea(radius) << std::endl;
  std::cout << "Circumference: " << CalculateCircumference(kCircleDiameter)
            << std::endl;
}

int main(int argc, const char* argv[]) {
  PrintCircleInfo(kCircleRadius);

  return 0;
}
