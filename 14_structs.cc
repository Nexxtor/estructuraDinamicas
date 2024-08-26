// company_struct.cc
#include <iostream>
#include <string>

// Define a structure to represent an employee
struct Employee {
  std::string name;
  int id;
  double salary;
};

// Define a structure to represent a company
struct Company {
  std::string name;
  std::string address;
  Employee employees[2];  // Fixed-size array of 2 employees
};

// Function to print employee details
void PrintEmployeeDetails(const Employee& employee) {
  std::cout << "Employee Name: " << employee.name << std::endl;
  std::cout << "Employee ID: " << employee.id << std::endl;
  std::cout << "Employee Salary: " << employee.salary << std::endl;
}

// Function to print company details
void PrintCompanyDetails(const Company& company) {
  std::cout << "Company Name: " << company.name << std::endl;
  std::cout << "Company Address: " << company.address << std::endl;
  std::cout << "Employees: " << std::endl;
  for (int i = 0; i < 2; ++i) {
    PrintEmployeeDetails(company.employees[i]);
    std::cout << std::endl;
  }
}

int main(int argc, char* argv[]) {
  // Create two employees
  Employee employee1 = {"Néstor Aldana", 12345, 75000.0};
  Employee employee2 = {"Elisa Aldana", 54321, 80000.0};

  // Create a company and add employees to it
  Company company = {"U. Centroamericana José Simeon Cañas",
                     "Blv. Los Próceres",
                     {employee1, employee2}};

  // Print the details of the company and its employees
  PrintCompanyDetails(company);

  return 0;
}
