#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number and assign it to the variable 'n'
    int n = std::rand();

    // Check if 'n' is positive, zero, or negative and print the result
    if (n > 0) {
        std::cout << "The number " << n << " is positive" << std::endl;
    } else if (n == 0) {
        std::cout << "The number " << n << " is zero" << std::endl;
    } else {
        std::cout << "The number " << n << " is negative" << std::endl;
    }

    return 0;
}

