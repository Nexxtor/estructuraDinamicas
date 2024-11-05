
#include <iostream>
#include <queue>
#include <string>

// Function to show the menu
void ShowMenu() {
  std::cout << "\nBank Queue Management System:\n";
  std::cout << "1. Add customer to queue\n";
  std::cout << "2. Serve customer\n";
  std::cout << "3. Show queue status\n";
  std::cout << "4. Exit\n";
  std::cout << "Choose an option: ";
}

// Function to display the current queue
void ShowQueue(std::queue<std::string> customer_queue) {
  if (customer_queue.empty()) {
    std::cout << "The queue is empty.\n";
    return;
  }

  std::cout << "Current queue:\n";
  while (!customer_queue.empty()) {
    std::cout << customer_queue.front() << std::endl;
    customer_queue.pop();
  }
}

int main(int argc, char *argv[]) {
  std::queue<std::string> customer_queue;
  int option = 0;
  std::string customer_name;

  while (option != 4) {
    ShowMenu();
    std::cin >> option;

    switch (option) {
      case 1:
        // Adding a new customer to the queue
        std::cout << "Enter customer name: ";
        std::cin.ignore();  // To clear the input buffer
        std::getline(std::cin, customer_name);
        customer_queue.push(customer_name);
        std::cout << "Customer '" << customer_name << "' added to the queue.\n";
        break;

      case 2:
        // Serving the customer at the front of the queue
        if (!customer_queue.empty()) {
          std::cout << "Customer '" << customer_queue.front()
                    << "' is being served.\n";
          customer_queue.pop();
        } else {
          std::cout << "No customers in the queue.\n";
        }
        break;

      case 3:
        // Displaying the current queue status
        ShowQueue(customer_queue);
        break;

      case 4:
        // Exiting the program
        std::cout << "Exiting the system...\n";
        break;

      default:
        std::cout << "Invalid option. Please try again.\n";
    }
  }

  return 0;
}
