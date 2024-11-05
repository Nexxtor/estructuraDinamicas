#include <iostream>
#include <string>
#include <unordered_map>

// Definimos una estructura para usar como clave en el unordered_map
struct FruitKey {
  std::string name;
  int id;

  // Sobrecargamos el operador de igualdad para que unordered_map pueda comparar
  // claves
  bool operator==(const FruitKey& other) const {
    return name == other.name && id == other.id;
  }
};

// Definimos una función hash personalizada para FruitKey
struct FruitKeyHash {
  std::size_t operator()(const FruitKey& key) const {
    // Usamos std::hash para combinar los hashes del nombre y el id
    std::size_t h1 = std::hash<std::string>()(key.name);
    std::size_t h2 = std::hash<int>()(key.id);
    // Combinamos ambos hashes usando XOR y un desplazamiento
    return h1 ^ (h2 << 1);
  }
};

// Definimos una estructura para almacenar información de la fruta
struct FruitInfo {
  int quantity;
  double pricePerUnit;

  friend std::ostream& operator<<(std::ostream& os, const FruitInfo& info) {
    os << "Quantity: " << info.quantity << ", Price per Unit: $"
       << info.pricePerUnit;
    return os;
  }
};

int main(int argc, char* argv[]) {
  // Declaramos un unordered_map con FruitKey como clave y FruitInfo como valor
  std::unordered_map<FruitKey, FruitInfo, FruitKeyHash> fruitTable;

  // Insertamos elementos en el mapa
  fruitTable[{"apple", 1}] = {10, 0.99};
  fruitTable[{"banana", 2}] = {20, 0.50};
  fruitTable[{"orange", 3}] = {15, 0.75};

  // Imprimimos los datos almacenados en el mapa
  for (const auto& pair : fruitTable) {
    std::cout << "Fruit: " << pair.first.name << ", ID: " << pair.first.id
              << " -> " << pair.second << std::endl;
  }

  return 0;
}
