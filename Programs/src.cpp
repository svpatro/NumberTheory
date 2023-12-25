#include <iostream>

int main(){

    system("clear");

    int choice = 0;

    std::cout << "Select which program you would like to execute:" << std::endl;
    std::cout << std::endl;
    std::cout << "1. Cayley Table" << std::endl;
    std::cout << "2. Coset Multiplier" << std::endl;
    std::cout << "3. Lagrange's Theorem" << std::endl;
    std::cout << "4. Multiplicative Inverses" << std::endl;
    std::cout << "5. Quotient Groups" << std::endl;
    std::cout << "6. Subgroup Checker" << std::endl;
    std::cout << std::endl;
    std::cout << "Choice: ";
    std::cin >> choice;
    std::cout << std::endl;

    std::cout << "Producing executable for: " << choice << std::endl;
    std::cout << "Loading... " << std::endl;

    if (choice == 1){

        system("make CayleyTable");

    }

    if (choice == 4){

        system("make MultiplicativeInverses");

    }

    return 0;
}