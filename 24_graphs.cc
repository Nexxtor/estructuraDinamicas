#include <iostream>
#include <list>
#include <vector>

class Graph {
 private:
  int V;                            // Número de vértices
  std::vector<std::list<int> > adj;  // Lista de adyacencia

 public:
  Graph(int V);                // Constructor
  void addEdge(int v, int w);  // Método para agregar una arista
  void printGraph();           // Método para imprimir el grafo
};

// Constructor para inicializar el grafo con V vértices
Graph::Graph(int V) {
  this->V = V;
  adj.resize(
      V);  // Redimensionamos el vector para tener listas para cada vértice
}

// Método para agregar una arista al grafo
void Graph::addEdge(int v, int w) {
  adj[v].push_back(w);  // Agrega w a la lista de adyacencia de v
  adj[w].push_back(v);  // Dado que es no dirigido, también agregamos v a la
                        // lista de adyacencia de w
}

// Método para imprimir el grafo
void Graph::printGraph() {
  for (int i = 0; i < V; i++) {
    std::cout << "Vértice " << i << ": ";
    for (auto adjV : adj[i]) {
      std::cout << adjV << " ";
    }
    std::cout << std::endl;
  }
}

int main() {
  Graph g(5);  // Creamos un grafo con 5 vértices

  g.addEdge(0, 1);  // Agregamos una arista entre el vértice 0 y 1
  g.addEdge(0, 4);  // Agregamos una arista entre el vértice 0 y 4
  g.addEdge(1, 2);  // Agregamos una arista entre el vértice 1 y 2
  g.addEdge(1, 3);  // Agregamos una arista entre el vértice 1 y 3
  g.addEdge(1, 4);  // Agregamos una arista entre el vértice 1 y 4
  g.addEdge(3, 4);  // Agregamos una arista entre el vértice 3 y 4

  g.printGraph();  // Imprimimos el grafo

  return 0;
}
