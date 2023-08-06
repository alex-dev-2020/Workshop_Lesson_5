

#include<iostream>
#include<cmath>

int main()
{
    int value;
    std::cout << "Введите число" << std::endl;
    std::cin >> value;
    
    for (int a = 2; a < 5; a++)
    {
        std::cout <<"Степень: " << a ;
        std::cout <<" значение: " << std::pow(value, a) << std::endl;
  
    }
    return 0;
}
 