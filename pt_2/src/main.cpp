#include <fstream>
#include <iostream>

int main()
{
    std::fstream file;

    file.open("file.txt", std::fstream::in | std::fstream::out | std::fstream::app);
    file << "Hello" << std::endl;
    file.close();
    return 0;
}