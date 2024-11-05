#include <iostream>
#include <set>

int main(int argc, char* argv[]) {
  // Declaramos un set de enteros
  std::set<int> studentIds;

  // Agregamos algunos números de estudiantes al set
  studentIds.insert(105);
  studentIds.insert(102);
  studentIds.insert(110);
  studentIds.insert(102);  // Este duplicado será ignorado
  studentIds.insert(108);

  // Imprimimos los elementos del set (automáticamente en orden)
  std::cout << "Student IDs in the set:" << std::endl;
  for (int id : studentIds) {
    std::cout << id << " ";
  }
  std::cout << std::endl;

  // Búsqueda de un elemento
  int searchId = 110;
  if (studentIds.find(searchId) != studentIds.end()) {
    std::cout << "Student ID " << searchId << " found in the set." << std::endl;
  } else {
    std::cout << "Student ID " << searchId << " not found in the set."
              << std::endl;
  }

  // Eliminación de un elemento
  studentIds.erase(105);
  std::cout << "After removing 105, the set contains:" << std::endl;
  for (int id : studentIds) {
    std::cout << id << " ";
  }
  std::cout << std::endl;

  return 0;
}
