

#include<iostream>

int main()
{
    int montn = 0;
    
    do
    {
        std::cout <<"укажите  месяц (число от 0 до 12 ) "<< std::endl;
        std::cin >> montn;
    } while(montn < 1 || montn> 12);
    
    std::cout << "Спасибо !" << std::endl; 

    return 0;
}

