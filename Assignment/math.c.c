#include <stdio.h>
#include "math.h"
int main(int num1, int num2, char Operator) 
{
    switch (Operator)
    {
        case '+':
            return num1 + num2;
        
        case '-':
            return num1 - num2;
     
        case '*':
            return num1 * num2;
        
        case '/':
            if (num2 ==0)
            {printf("Undefined");
            }
            else return num1/num2;
        
        case '%':
            return num1 % num2;
            
    }
return 0;
}

