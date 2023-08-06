

#include<iostream>

std::string s;

int main()
{
    
    do{
        std::cout <<"введите букву `а` "<< std::endl;
        std::cin >> s;
    } while(s != "a");
    std::cout << "Спасибо !" << std::endl; 

    return 0;
}
