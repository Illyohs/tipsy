#include <iostream>

#include "./includes/reader.hpp"

int main()
{
    Reader r;
    std::cout << "Gooo\n";

    r.setName("Foooo");
    r.setVersion("1.0.0");

    std::cout << r.getName() << std::endl << r.getVersion() << std::endl;
    return 0;
}