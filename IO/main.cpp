#include <iostream>


int main()
{
    int val1, val2;
    std::cin >> val1;
    std::cin >> val2;

    while (val1 != 0 && val2 != 0)
    {
        std::cout << val1+val2 << std::endl;
        std::cin >> val1;
        std::cin >> val2;
    }

    return 0;
}