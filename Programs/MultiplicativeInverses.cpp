// Author: Shamik V. Patro
// The purpose of this program is to calculate multiplicative inverses of integers modulo n.

#include <iostream>
#include <vector>

int main(){
    
    // Inquire user for modulus

    int n = 0;
    int count = 0;

    std::cout << "Select a modulus: ";
    std::cin >> n;

    // Establish the set of integers modulo n

    int intmod[n];
    std::vector<int> multinv;


    for (int i = 0; i < n; i++){
        intmod[i] = i;
    }

    // Pick two integers (j, k) from the set and determine if gcd(j, k) mod n is a multiplicative inverse

    for (int j = 0; j < n; j++){
        for (int k = 0; k < n; k++){
            if (j*k % n == 1){
                count++;
                multinv.push_back(j);
                std::cout << j 
                << "'s multiplicative inverse is " 
                << k 
                << " (" 
                << j*k 
                << " % " 
                << n 
                << " = " 
                << (j*k)%n 
                << ")" 
                << std::endl;
            }
        }
    }

    std::cout << std::endl;
    std::cout << "The elements of the set are: [ ";

    for (std::vector<int>::iterator it = multinv.begin(); it != multinv.end(); it++){

        std::cout << *it << " ";

    }

    std::cout << "]" << std::endl;

    std::cout << "The cardinality of the set is: " << count << std::endl;

    return 0;

}
