#include <iostream>

int main() {
  char operation;
  float num1, num2;
  std::cout << "Enter the first number: ";
  std::cin >> num1;
  std::cout << "Enter the second number: ";
  std::cin >> num2;
  std::cout << "Enter the operation you want to perform (+, -, *, /): ";
  std::cin >> operation;
  switch (operation) {
    case '+':
      std::cout << num1+num2 << std::endl;
      break;
    case '-':
      std::cout << num1-num2 << std::endl;
      break;
    case '*':
      std::cout << num1*num2 << std::endl;
      break;
    case '/':
    if (num2 == 0) {
        std::cout << "Error: Division by zero" << std::endl;
      } else
    {
      std::cout << num1/num2 << std::endl;
      break;
    }
    default:
      std::cout << "Invalid operation";
      break;
    }  
  return 0;
}
