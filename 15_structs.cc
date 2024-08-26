#include <iostream>
#include <string>

// Define the constant size for the grades array.
const int kSize = 3;

// Define a struct to represent a person with an ID, name, and an array of grades.
struct Person {
  std::string id;
  std::string name;
  double grades[kSize];
};

// Function prototypes with descriptive names.
Person FillPerson();
void PrintPerson(const Person& person);

int main(int argc, char* argv[]) {
  // Declare a Person object.
  Person p1;

  // Fill the Person object with user input.
  p1 = FillPerson();

  // Print the Person object's information.
  PrintPerson(p1);

  return 0;
}

// Function to fill a Person struct with input from the user.
Person FillPerson() {
  Person person;

  std::cout << "Id: ";
  std::cin >> person.id;
  std::cout << "Name: ";
  std::cin >> person.name;

  std::cout << "Ingrese las notas" << std::endl;
  // Loop to input each grade.
  for (int i = 0; i < kSize; ++i) {
    std::cout << "\tIngrese la nota " << (i + 1) << " : ";
    std::cin >> person.grades[i];
  }

  // Return the filled Person object.
  return person;
}

// Function to print a Person struct's information.
void PrintPerson(const Person& person) {
  std::cout << person.id << "," << person.name << ",";

  // Loop through the grades array to print each grade except the last one.
  for (int i = 0; i < kSize - 1; ++i) {
    std::cout << person.grades[i] << ",";
  }

  // Print the last grade without a trailing comma.
  std::cout << person.grades[kSize - 1] << std::endl;
}
