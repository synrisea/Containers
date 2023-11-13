#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>
#include <string>
#include <typeinfo>

template <typename T>
void PrintContainer(T& containerName, char symbol)
{
    auto lastIndex = std::prev(containerName.end());

    for (auto i = containerName.begin(); i != containerName.end(); ++i)
    {
        std::cout << *i;

        if (i != lastIndex)
        {
            std::cout << symbol;
        }
    }
}

int main()
{
    std::list<int> myList = { 1, 5, 7, 12 };
    std::vector<double> myVector = { 3.21, 5.53, 76.12, 31.36 };
    std::deque<float> myDeque = { 2.1, 35, 12.6 };
    std::array<short, 4> myArray = { 4, 3, 2, 1 };

    std::cout << "List : ";
    PrintContainer(myList, ',');
    std::cout << "\nVector : ";
    PrintContainer(myVector, ' ');
    std::cout << "\nDeque : ";
    PrintContainer(myDeque, '/');
    std::cout << "\nArray : ";
    PrintContainer(myArray, ';');

    return 0;
}