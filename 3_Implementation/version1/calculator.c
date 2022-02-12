/**
 * @file calculator.c
 * @author Sanket Kamble (guddukamble22032000.com)
 * @brief Mathematical Operations of calculator
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

<<<<<<< HEAD
=======
  
>>>>>>> 71a173dda8b6e164d52eba298aa1bb4c28cd4ab2
  
// function definition  
int addition()  
{  
    int i, sum = 0, num, f_num; // declare a local variable   
    printf (" How many numbers you want to add: ");  
    scanf ("%d", &num);  
    printf (" Enter the numbers: \n ");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %d", &f_num);  
        sum = sum + f_num;  
    }  
    printf (" Total Sum of the numbers = %d", sum);  
    return 0;  
}  
  
// use subtract() function to subtract two numbers  
int subtract()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 - n2;    
    printf (" The subtraction of %d - %d is: %d", n1, n2, res);  
}  
  
// use multiply() function to multiply two numbers  
int multiply()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 * n2;    
    printf (" The multiply of %d * %d is: %d", n1, n2, res);  
}  
  
// use divide() function to divide two numbers  
int divide()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    res = n1 / n2;    
    printf (" \n The division of %d / %d is: %d", n1, n2, res);  
}  
  
// use sq() function to get the square of the given number  
int sq()  
{  
    int n1, res;  
    printf (" Enter a number to get the Square: ");  
    scanf ("  %d", &n1);  
      
    res = n1 * n1;    
    printf (" \n The Square of %d is: %d", n1, res);  
}  
