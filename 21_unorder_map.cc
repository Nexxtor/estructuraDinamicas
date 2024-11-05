#include <iostream>
#include <string>
#include <unordered_map>

// Definimos una estructura para almacenar información de cada fruta
struct FruitInfo {
  int quantity;         // Cantidad disponible
  double pricePerUnit;  // Precio por unidad

  // Sobrecargamos el operador `<<` para imprimir la estructura fácilmente
  friend std::ostream& operator<<(std::ostream& os, const FruitInfo& info) {
    os << "Quantity: " << info.quantity << ", Price per Unit: $"
       << info.pricePerUnit;
    return os;
  }
};

int main(int argc, char* argv[]) {
  // Declaramos un unordered_map que usa strings como clave y FruitInfo como
  // valor
  std::unordered_map<std::string, FruitInfo> fruitTable;

  // Insertamos elementos en la tabla hash con información detallada de cada
  // fruta
  fruitTable["apple"] = {10, 0.99};   // 10 manzanas a $0.99 cada una
  fruitTable["banana"] = {20, 0.50};  // 20 bananas a $0.50 cada una
  fruitTable["orange"] = {15, 0.75};  // 15 naranjas a $0.75 cada una

  // Accedemos a la información de una fruta en específico
  std::string key = "apple";
  if (fruitTable.find(key) != fruitTable.end()) {
    std::cout << "Information for '" << key << "': " << fruitTable[key]
              << std::endl;
  } else {
    std::cout << "The fruit '" << key << "' is not in the hash table."
              << std::endl;
  }

  // Iteramos sobre la tabla hash e imprimimos toda la información de cada fruta
  std::cout << "\nCurrent contents of the fruit table:\n";
  for (const auto& pair : fruitTable) {
    std::cout << pair.first << " -> " << pair.second << std::endl;
  }

  return 0;
}
