#include <iostream>
#include <vector>

// index needs to be an int, not a std::size_t, otherwise we won't be able to detect if the user passes in a negative index
template <typename T>
void printElement(const std::vector<T>& vector, int index)
{
    if (index < 0 || index >= vector[static_cast<std::size_t>(index)] )
    {
        std::cout << "Invalid" << '\n';
    }
    else 
    {
        std::cout << vector[static_cast<std::size_t>(index)] << '\n';
    }
}

int main()
{
    std::vector v1{ 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector v2{ 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);

    return 0;
}