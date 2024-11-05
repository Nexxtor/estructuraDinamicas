#include <iostream>
#include <string>
#include <unordered_set>

struct Student {
  int id;
  std::string name;

  // Sobrecarga del operador de igualdad
  bool operator==(const Student& other) const {
    return id == other.id && name == other.name;
  }
};

struct StudentHash {
  std::size_t operator()(const Student& student) const {
    // Combinamos el hash de `id` y `name` usando XOR y desplazamientos
    std::size_t h1 = std::hash<int>()(student.id);
    std::size_t h2 = std::hash<std::string>()(student.name);
    return h1 ^ (h2 << 1);  // Mezcla de hashes
  }
};

int main(int argc, char* argv[]) {
  // Definimos el unordered_set con la estructura personalizada y la función
  // hash
  std::unordered_set<Student, StudentHash> students;

  // Agregamos algunos estudiantes al conjunto
  students.insert({101, "Nestor"});
  students.insert({102, "Brayan"});
  students.insert({103, "Renee"});
  students.insert({101, "Gabriel"});  // Duplicado, no se agregará

  // Imprimir los elementos del conjunto
  for (const auto& student : students) {
    std::cout << "ID: " << student.id << ", Name: " << student.name
              << std::endl;
  }

  // Buscar un estudiante en el conjunto
  Student target = {102, "Brayan"};
  if (students.find(target) != students.end()) {
    std::cout << "Student " << target.name << " found in the set." << std::endl;
  } else {
    std::cout << "Student " << target.name << " not found in the set."
              << std::endl;
  }

  return 0;
}
