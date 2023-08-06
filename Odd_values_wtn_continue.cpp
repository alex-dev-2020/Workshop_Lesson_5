
#include<iostream>

int main()
{
    int upper_limit;
    std::cout << "Введите верхнюю границу диапазона" << std::endl;
    std::cin >> upper_limit;
    
    for (int a = 0; a < upper_limit; a++)
    {
        // остаток от деления на 2 !=0 : → пропускаем итерацию
        if(a % 2 == 0)
        {
            continue;
        }
        std::cout <<"НЕ четное : " << a << std::endl;
  
    }
    return 0;
}