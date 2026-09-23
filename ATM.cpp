#include <iostream>

int main() {
  char choice;
do {
  std::cout << "1.Balance: $" ;
  std::cout << "2.Withdrawal: ";
  std::cout << "3.Deposit: ";
  std::cout << "4.Exit: \n";
  std::cout << "Enter your choice:";
  std::cin >> choice;
  switch (choice) {
      case '1':
        std::cout << "Balance: $" << std::endl;
        break;
      case '2':
        std::cout <<"Withdrawal: "  << std::endl;
        break;
      case '3':
        std::cout << "Deposit: " << std::endl;
        break;
      case '4':
        std::cout << "Thanks for using our ATM." << std::endl;
        break;
      
      default:
        std::cout << "Invalid operation \n";
        break;
    }  
  } while (choice != '4');
 
  return 0;
}
