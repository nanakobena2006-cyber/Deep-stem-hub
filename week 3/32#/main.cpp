
#include <iostream>
#include <string>   //Needed for std::string

int main()
{
    std::string cars[3] = {
        "Nissan GTR skyline",
        "Toyota supra twin turbo V8",
        "Honda Civic mod 2JZ inline 6"
    };

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    return 0;
}
