#include <iostream>
#include <array>
#include <algorithm>
#include <string>

struct Student {
    std::string name;
    int grade;
};

// Función de comparación personalizada para ordenar por calificación
bool compareByGrade(const Student& a, const Student& b) {
    return a.grade < b.grade;
}

int main() {
    std::array<Student, 4> students = {Student{"Alice", 90}, Student{"Bob", 75}, Student{"Charlie", 85}, Student{"Dave", 70}};
    
    // Ordenar el array por calificación
    std::sort(students.begin(), students.end(), compareByGrade);

    std::cout << "Students sorted by grade:\n";
    for (const auto& student : students) {
        std::cout << student.name << " - Grade: " << student.grade << std::endl;
    }

    // Búsqueda simple por nombre usando std::find_if
    std::string searchName = "Bob";
    auto it = std::find_if(students.begin(), students.end(), [&searchName](const Student& s) {
        return s.name == searchName;
    });

    if (it != students.end()) {
        std::cout << "Found student: " << it->name << " with grade " << it->grade << std::endl;
    } else {
        std::cout << searchName << " not found." << std::endl;
    }

    // Búsqueda binaria por calificación
    Student target = {"", 85};  // La búsqueda binaria solo usa calificación
    bool found = std::binary_search(students.begin(), students.end(), target, compareByGrade);
    std::cout << "Binary search for grade 85: " << (found ? "Found" : "Not Found") << std::endl;

    return 0;
}
