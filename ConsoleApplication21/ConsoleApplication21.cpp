#include <iostream>

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;
    std::cout << "Enter the number: " << std::endl;
    std::cin >> num;

    if (num < 0)
    {
        std::cout << "Number can`t be less than 0";
        return 0;
    }

    std::cout << "Factorial of a number " << num << " = " << factorial(num);
}
