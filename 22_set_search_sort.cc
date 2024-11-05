#include <iostream>
#include <set>
#include <string>

struct Student {
    std::string name;
    int grade;
    
    // Definir el operador < para que std::set ordene por nombre
    bool operator<(const Student& other) const {
        return name < other.name;
    }
};

int main(int argc, char* argv[]) {
    std::set<Student> studentSet = {{"Alice", 90}, {"Bob", 75}, {"Charlie", 85}, {"Dave", 70}};
    
    std::cout << "Students sorted by name:\n";
    for (const auto& student : studentSet) {
        std::cout << student.name << " - Grade: " << student.grade << std::endl;
    }

    // Búsqueda binaria implícita en std::set
    std::string searchName = "Charlie";
    auto it = studentSet.find({"Charlie", 0});  // El segundo valor en el par es irrelevante aquí

    if (it != studentSet.end()) {
        std::cout << "Found student: " << it->name << " with grade " << it->grade << std::endl;
    } else {
        std::cout << searchName << " not found." << std::endl;
    }

    return 0;
}
