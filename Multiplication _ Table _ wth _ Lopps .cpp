
// таблица  усмножения в консоли заданной размерности

#include<iostream>

int main()
{
    int size;
    std::cout << "Pls input table size" << std::endl;
    std::cin >> size;
    for(int i = 1; i <= size; i++ )
    {
        for(int j = 1; j <= size; j++)
        {
            std::cout << i * j <<"\t" ;
        }
        std::cout <<  std::endl;
    }

    return 0;
}