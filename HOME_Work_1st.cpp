

#include<iostream>

int main()
{
    int sum = 0; 
    int number = 0; 
    while(true)
    {
        std::cout << "Введите целое число или число '0', чтобы закончить:";
        std::cin >> number;
            if(number == 0)
            {
                std::cout << "Сумма: "<< sum << std::endl;
                break;
            }
            
        sum += number;

    }
}