#include <iostream>
#include <stack>
#include <string>

/*
Exercise 1: Stack Usage
Description:
Imagine you are developing a basic text editor that allows users to undo and
redo actions. Every time the user performs an action (e.g., writing a character
or deleting a word), this action is stored so that it can be undone if
necessary.

Objective:
Implement an undo and redo system using two stacks: one to store the performed
actions (undo stack) and another to store the undone actions (redo stack).

Instructions:

When the user performs a new action, it is added to the undo stack.
If the user decides to undo the last action, it is moved from the undo stack to
the redo stack. If the user redoes an action, it is moved from the redo stack to
the undo stack. Implement the functions `undo()` and `redo()` so users can
interact with the system. Ensure the system correctly handles cases where no
actions are available to undo or redo.
*/

// Function to display the options menu
void ShowMenu() {
  std::cout << "\nBasic Text Editor:\n";
  std::cout << "1. Write action\n";
  std::cout << "2. Undo last action\n";
  std::cout << "3. Redo action\n";
  std::cout << "4. Show current actions\n";
  std::cout << "5. Exit\n";
  std::cout << "Select an option: ";
}

// Function to display the current stack of actions
void ShowActions(const std::stack<std::string> &actions) {
  std::stack<std::string> temp = actions;
  std::cout << "Current actions:\n";
  if (temp.empty()) {
    std::cout << "No actions.\n";
    return;
  }
  while (!temp.empty()) {
    std::cout << temp.top() << std::endl;
    temp.pop();
  }
}

int main(int argc, char *argv[]) {
  std::stack<std::string> undo_stack;  // Stack to store performed actions
  std::stack<std::string> redo_stack;  // Stack to store undone actions

  int option = 0;
  std::string action;

  while (option != 5) {
    ShowMenu();
    std::cin >> option;

    switch (option) {
      case 1:
        // Write a new action
        std::cout << "Enter the action (write/delete/other): ";
        std::cin.ignore();  // Clear input buffer
        std::getline(std::cin, action);
        undo_stack.push(action);
        // Clear the redo stack as a new action has been performed
        while (!redo_stack.empty()) {
          redo_stack.pop();
        }
        std::cout << "Action '" << action << "' performed.\n";
        break;

      case 2:
        // Undo the last action
        if (!undo_stack.empty()) {
          action = undo_stack.top();
          undo_stack.pop();
          redo_stack.push(action);
          std::cout << "Action '" << action << "' undone.\n";
        } else {
          std::cout << "No actions to undo.\n";
        }
        break;

      case 3:
        // Redo the last undone action
        if (!redo_stack.empty()) {
          action = redo_stack.top();
          redo_stack.pop();
          undo_stack.push(action);
          std::cout << "Action '" << action << "' redone.\n";
        } else {
          std::cout << "No actions to redo.\n";
        }
        break;

      case 4:
        // Show the current actions
        ShowActions(undo_stack);
        break;

      case 5:
        // Exit the program
        std::cout << "Exiting the editor...\n";
        break;

      default:
        std::cout << "Invalid option. Please try again.\n";
    }
  }

  return 0;
}
