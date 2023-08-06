
#include<iostream>

int main()
{
    // нижнее значение 
    int a = 0 ;
    int upper_limit;
    std::cout << "Введите верхнюю границу диапазона" << std::endl;
    std::cin >> upper_limit;
    
    while (a < upper_limit)
    {
        // остаток от деления на 2 !=0 : → пропускаем итерацию
        if(a % 2 != 0)
        {
            // икремент для пропущенной итерации
            a++;
            continue;
        }
        
        // икремент
        a++;
        std::cout <<"НЕ четное : " << a << std::endl;
  
    }
    return 0;
}