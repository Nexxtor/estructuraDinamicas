
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  // Declaración de una tabla hash (unordered_map)
  std::unordered_map<std::string, int> hashTable;

  // Insertar valores en la tabla hash
  hashTable["apple"] = 3;
  hashTable["banana"] = 5;
  hashTable["orange"] = 2;

  // Acceder a un valor utilizando la clave
  std::cout << "The value for 'apple' is: " << hashTable["apple"] << std::endl;

  // Verificar si una clave existe en la tabla hash
  std::string key = "banana";
  if (hashTable.find(key) != hashTable.end()) {
    std::cout << key
              << " exists in the hash table with value: " << hashTable[key]
              << std::endl;
  } else {
    std::cout << key << " does not exist in the hash table." << std::endl;
  }

  // Eliminar una clave de la tabla hash
  hashTable.erase("orange");

  // Iterar sobre la tabla hash
  std::cout << "Current contents of the hash table:" << std::endl;
  for (const auto& pair : hashTable) {
    std::cout << pair.first << ": " << pair.second << std::endl;
  }

  return 0;
}
