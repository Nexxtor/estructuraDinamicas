// employee_struct.cc
#include <iostream>
#include <string>

// Define a structure to represent an employee
struct Employee {
  std::string name;
  int id;
  double salary;
};

// Function to print employee details
void PrintEmployeeDetails(const Employee& employee) {
  std::cout << "Employee Name: " << employee.name << std::endl;
  std::cout << "Employee ID: " << employee.id << std::endl;
  std::cout << "Employee Salary: " << employee.salary << std::endl;
}

int main(int argc, char* argv[]) {
  // Initialize an Employee structure
  Employee employee = {"Néstor Aldana", 12345, 75000.0};

  // Print the employee's details
  PrintEmployeeDetails(employee);

  // Modify the employee's salary
  employee.salary += 5000.0;
  std::cout << "Updated Salary: " << employee.salary << std::endl;

  return 0;
}
