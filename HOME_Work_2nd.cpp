
#include <iostream>

int main(){

    int number,result = 0; 
   
    std::cout << "Введите целое число: \n";
    
    std:: cin >> number;
 
    while(number > 0) {
        
        result += number;
        number /= 10;
    }
    
    std::cout << "Сумма цифр : " << result << "\n";
    
    return 0 ;
        
}