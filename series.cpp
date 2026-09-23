 #include <iostream>

void NormalSeries(int limit) {

    for (int i = 1; i <= limit; ++i) {
        std::cout << i << " " << std::endl;
    }
    
}
void EvenSeries(int limit) {
    
    for (int i = 2; i <= limit; i += 2) {
        std::cout << i << " " << std::endl;
    }
    
}
void OddSeries(int limit) {
    
    for (int i = 1; i <= limit; i += 2) {
        std::cout << i << " " << std::endl;
    }
    
}

int main() {
    int limit, choice;

    do {
    std::cout << "1. Normal Series" << std::endl;
    std::cout << "2. Even Series" << std::endl;
    std::cout << "3. Odd Series" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice == 4) {
        std::cout << "Thank you." << std::endl;
        break;
    }

    std::cout << "Enter Limit: ";
    std::cin >> limit;
    switch (choice) {
        case 1:
            NormalSeries(limit);
            break;
        case 2:
            EvenSeries(limit);
            break;
        case 3:
            OddSeries(limit);
            break;
    }
    } while (choice != 4);
    
      return 0;
} 
