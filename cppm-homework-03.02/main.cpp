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
private:
    int num;
    
    
public:
    
    int set_num (int num)
    {
        std::cin >> num;
        this->num = num;
        return num;
    }
    
    Counter (int num) {
        this->num = num;
    }
    
    Counter ()
    {
        num = 1;
    }
    
    void counter_plus (int num)
    {
       this->num++ == num;
    }
    
    void counter_minus (int num)
    {
        this->num-- == num;
    }
    
    void counter_value ()
    {
        
        std::cout << num;
    }
};

int main(int argc, const char * argv[]) {
    
    Counter counter;
    std::string answer;
    std::string no;
    char a;
    
    std::cout << "Do  you want to enter a number for the counter? Enter yes or no: ";
    std::cin >> answer;
    
if (answer == "yes")
    {
        std::cout << '\n';
        std::cout << "Enter a number for the counter: " ;
        counter.set_num(0);
    }
    
    for ( ; ; )
    {
        std::cout << '\n' << "Enter ('+', '-', '=' or 'x'): ";
        std::cin >> a;
        if (a == '+')
        {
            counter.counter_plus(0);
        }
        else if (a == '-')
        {
            counter.counter_minus(0);
        }
        else if (a == '=')
        {
            counter.counter_value();
        }
        else if (a == 'x')
        {
            std::cout << "Good bye!" << std::endl;
            break;
        }
    }
    
    return 0;
}
