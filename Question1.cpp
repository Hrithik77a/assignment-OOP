#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName;

    // Get user input for first name
    std::cout << "Input First Name: ";
    std::getline(std::cin, firstName);

    // Get user input for last name
    std::cout << "Input Last Name: ";
    std::getline(std::cin, lastName);

    // Print the names in reverse order with a space between them
    std::cout << "Name in reverse is: " << lastName << " " << firstName << std::endl;

    return 0;
}