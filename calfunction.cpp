#include <iostream>
void sum(float num1, float num2) {
  std::cout << "The sum is: " << num1 + num2 << std::endl;
} 
void subtract(float num1, float num2) {
  std::cout << "The difference is: " << num1 - num2 << std::endl;
}
void multiply(float num1, float num2) {
  std::cout << "The product is: " << num1 * num2 << std::endl;
}
void divide(float num1, float num2) {
  if (num2 == 0) {
    std::cout << "Error: Division by zero" << std::endl;
  } else {
    std::cout << "The quotient is: " << num1 / num2 << std::endl;
  }
}
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
      sum();
      break;
    case '-':
      subtract();
      break;
    case '*':
      multiply();
      break;
    case '/':
      divide();
      break;
    default:
      std::cout << "Invalid operation" << std::endl;
      break;
  }
  return 0;
}
