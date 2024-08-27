#include <iostream>
#include <string>

// Define the constant size for the grades array.
const int kSize = 3;

// Define a struct to represent a person with an ID, name, and an array of
// grades.
struct Person {
  std::string id;
  std::string name;
  double grades[kSize];
};

// Function prototypes with descriptive names.
Person FillPerson();
void FillPersonRef(Person& person);
void PrintPerson(const Person& person);
void FillPeople(Person people[], int size);
void PrintPeople(Person people[], int size);
double AverageGrade(Person person, int number_grades);
double ClassroomAverage(Person people[], int size);

int main(int argc, char* argv[]) {
  int numbers_students;
  std::cout << "Ingrese la cantidad de estudiantes: ";
  std::cin >> numbers_students;

  Person students[numbers_students];

  FillPeople(students, numbers_students);
  PrintPeople(students, numbers_students);

  std::cout << "El promedio de la clase es: " 
            << ClassroomAverage(students, numbers_students);

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

void FillPersonRef(Person& person) {
  // TODO: Change the function body
  person.name = "Hola";
  person.id = "Hola";
  person.grades[0] = 5;
  person.grades[1] = 5;
  person.grades[2] = 5;
}

void FillPeople(Person people[], int size) {
  for (int i = 0; i < size; ++i) {
    FillPersonRef(people[i]);
    // people[i] = FillPerson();
  }
}

void PrintPeople(Person people[], int size) {
  for (int i = 0; i < size; ++i) {
    PrintPerson(people[i]);
  }
}

double AverageGrade(Person person, int number_grades) {
  double sum = 0;
  for (int i = 0; i < number_grades; ++i) {
    sum += person.grades[i];
  }
  return sum / number_grades;
}
double ClassroomAverage(Person people[], int size) {
  double sum = 0;
  for (int i = 0; i < size; ++i) {
    sum += AverageGrade(people[i], kSize);
  }
  return sum / size;
}