
//  доходим до 4-й итерации, выходим из цикла 

#include<iostream>

int main()
{
    int upper_limit;
    std::cout <<"Введите верхнюю  границу дипазона" << std::endl;
    std::cin >> upper_limit;
    
    for(int a = 0 ; a < upper_limit; a++)
    {
        if (a == 4)
        {
            break;
        }
        std::cout << a << std::endl;
    }
    
    return 0;
}