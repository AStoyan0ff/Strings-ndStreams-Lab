#include <iostream>
#include <string>

int main() { 
    
    std::string first, second;
    std::getline(std::cin, first);
    std::getline(std::cin, second);
    
    size_t position = second.find(first); 
    while (position != std::string::npos) {
        second.erase(position, first.length()); 
        position = second.find(first); 
    }
       
    std::cout << second;

    return 0;
}
