//////////////////////////////////////////////written by mht83/////////////////////////////////////////

#include <iostream>

int main()
{   
    int first_multipler = 5 ,sec_multipler = 3 , user_input, sum = 0;
    std::cout << "SumOfMultiples app\n" << "enter an integer: ";
    std::cin >> user_input;
    for (int i = 1; i <= user_input; ++i) {
        if(i%first_multipler == 0 || i%sec_multipler == 0)
        {
            std::cout << i<<"\t";
            sum += i;
        }
    }
    std::cout << "sum of all natural numbers divisible by either 3 or 5 up to your input is: " << sum;
} 
 