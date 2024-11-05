#include <iostream>
#include <set>
#include <string>

struct Student {
  int id;
  std::string name;

  // Sobrecargamos el operador < para definir el orden
  bool operator<(const Student& other) const { return id < other.id; }
};

int main(int argc, char* argv[]) {
  // Declaramos un set de estudiantes
  std::set<Student> students;

  // Insertamos algunos estudiantes en el set
  students.insert({101, "Alice"});
  students.insert({103, "Charlie"});
  students.insert({102, "Bob"});
  students.insert({101, "Alice"});  // Este duplicado será ignorado

  // Imprimimos los elementos del set (ordenados por `id`)
  std::cout << "Students in the set:" << std::endl;
  for (const auto& student : students) {
    std::cout << "ID: " << student.id << ", Name: " << student.name
              << std::endl;
  }

  // Búsqueda de un estudiante
  Student target = {102, "Bob"};
  if (students.find(target) != students.end()) {
    std::cout << "Student " << target.name << " found in the set." << std::endl;
  } else {
    std::cout << "Student " << target.name << " not found in the set."
              << std::endl;
  }

  // Eliminación de un estudiante
  students.erase({101, "Alice"});
  std::cout << "After removing Alice, the set contains:" << std::endl;
  for (const auto& student : students) {
    std::cout << "ID: " << student.id << ", Name: " << student.name
              << std::endl;
  }

  return 0;
}
