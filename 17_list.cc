#include <iostream>
#include <list>

int main() {
    // Declarar una lista de enteros
    std::list<int> myList;

    // Insertar elementos en la lista
    myList.push_back(10); // Inserta al final
    myList.push_back(20);
    myList.push_back(30);

    myList.push_front(5); // Inserta al principio

    // Imprimir los elementos de la lista
    std::cout << "Elementos de la lista: ";
    for (int element : myList)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Eliminar un elemento específico
    myList.remove(20);

    // Imprimir la lista después de eliminar el elemento
    std::cout << "Lista después de eliminar 20: ";
    for (int element : myList)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Acceso al primer y último elemento
    std::cout << "Primer elemento: " << myList.front() << std::endl;
    std::cout << "Último elemento: " << myList.back() << std::endl;

    // Eliminar el primer y último elemento
    myList.pop_front();
    myList.pop_back();

    // Imprimir la lista después de eliminar el primer y último elemento
    std::cout << "Lista después de eliminar el primero y el último: ";
    for (int element : myList)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
