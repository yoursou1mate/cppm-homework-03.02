//
//  main.cpp
//  cppm-homework-03.02
//
//  Created by a1ex on 6/18/23.
//

#include <iostream>
#include <string>

class Counter
{
   public:
    int num = 1;
    char a;
    
    void counter ()
    {
       for ( ; ; )
       {
           std::cout << '\n' << "Enter ('+', '-', '=' or 'x'): ";
           std::cin >>  a;
           if (a == '+')
           {
               num++;
           }
           else if (a == '-')
           {
               num--;
           }
           else if (a == '=')
           {
               std::cout << num;
           }
           else if (a == 'x')
           {
               std::cout << "Good bye!" << std::endl;
               break;
           }
       }
    }
    
    
    
};

int main(int argc, const char * argv[]) {
   
    Counter  counter;
    std::string answer;
    std::string no;
    std::cout << "Do  you want to enter a number for the counter? Enter yes or no: ";
    std::cin >> answer;
    
if (answer == "yes")
    {
        std::cout << '\n';
        std::cout << "Enter a number for the counter: " ;
        std::cin >> counter.num;
    }

    counter.counter();
    
    
    
    
    
    
    return 0;
}
