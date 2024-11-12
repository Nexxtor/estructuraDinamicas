#include <iostream>
#include <list>
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

int main(int argc, char* argv[]) {
    std::list<Student> students = {{"Florence", 90}, {"Roberto", 75}, {"Erick", 85}, {"Carlos", 70}};
    
    // Ordenar la lista por calificación
    students.sort(compareByGrade);

    std::cout << "Students sorted by grade:\n";
    for (const auto& student : students) {
        std::cout << student.name << " - Grade: " << student.grade << std::endl;
    }

    // Búsqueda simple por nombre usando std::find_if
    std::string searchName = "Carlos";
    auto it = std::find_if(students.begin(), students.end(), [&searchName](const Student& s) {
        return s.name == searchName;
    });

    if (it != students.end()) {
        std::cout << "Found student: " << it->name << " with grade " << it->grade << std::endl;
    } else {
        std::cout << searchName << " not found." << std::endl;
    }

    return 0;
}
