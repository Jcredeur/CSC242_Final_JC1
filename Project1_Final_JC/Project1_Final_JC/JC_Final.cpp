#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello everyone!" << std::endl;

    std::cout << "Say hello back: ";
    std::string response;
    std::getline(std::cin, response);

    std::cout << "Hello back, " << response << "!" << std::endl;

    std::cout << "\nPress any key to exit...";
    std::cin.get(); // waits for Enter
    return 0;
}
