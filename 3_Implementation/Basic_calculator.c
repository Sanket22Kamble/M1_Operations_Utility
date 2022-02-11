/**
 * @file Basic_calculator.c
 * @author Sanket Kamble (guddukamble22032000@gmail.com)
 * @brief Different Operations of Calculator
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // variable declaration
    int ch, num1, num2;
    float result;
    do
    {
        // Calculator display
        printf (" Select an operation to perform the calculation in C Calculator: ");
        printf (" \n 1.Addition  \t \t 2.Subtraction \n 3.Multiplication \t 4.Division \n 5.Square \t \t 6.Modulus \n 7.Exit \n \n Please, Make a choice ");

        scanf ("%d", &ch); // choose the operation


    // switch statement
    switch (ch)
    {
        case 1:
            // Add num1 and num2
            printf (" You chose: Addition");
            printf ("\n Enter First Number: ");
            scanf (" %d", &num1);
            printf (" Enter Second Number: ");
            scanf (" %d", &num2);
            result = num1 + num2; // Add num1 and num2
            printf (" Addition of two numbers is: %.2f", result);
            break; // break the function

        case 2:
            // Subtract num1 and num2
            printf (" You chose: Subtraction");
            printf ("\n Enter First Number: ");
            scanf (" %d", &num1);
            printf (" Enter Second Number: ");
            scanf (" %d", &num2);
            result = num1 - num2; // subtract num1 and num2
            printf (" Subtraction of two numbers is: %.2f", result);
            break; // break the function

        case 3:
            // Multiplication of num1 and num2
            printf (" You chose: Multiplication");
            printf ("\n Enter First Number: ");
            scanf (" %d", &num1);
            printf (" Enter Second Number: ");
            scanf (" %d", &num2);
            result = num1 * num2; // multiply num1 and num2
            printf (" Multiplication of two numbers is: %.2f", result);
            break; // break the function

        case 4:
            // Division of the numbers
            printf (" You chose: Division");
            printf ("\n Enter First Number: ");
            scanf (" %d", &num1);
            printf (" Enter Second Number: ");
            scanf (" %d", &num2);
            if (num2 == 0)
                {
                    printf (" \n Divisor cannot be zero. Please enter another value ");
                    scanf ("%d", &num2);
                }
            result = num1 / num2; // divide num1 and num2
            printf (" Division of two numbers is: %.2f", result);
            break; // break the function

        case 5:
            // getting square of a number
            printf (" You chose: Square");
            printf ("\n Enter First Number: ");
            scanf (" %d", &num1);

            result = num1 * num1; // get square of a number
            printf (" Square of %d number is: %.2f", num1, result);
            break; // break the function

        case 6:
            //square root of the number
            printf (" You chose: Square Root");
            printf ("\n Enter First Number: ");
            scanf (" %d", &num1);

            result = num1%num2; // modulus of num1 and num2
            printf (" Square Root of %d numbers is: %.2f", num1, result);
            break; // break the function

        case 7:
            printf (" You chose: Exit");
            exit(0);
            break; // break the function        
            default:
            printf(" Something is wrong!! ");
            break;
    }
    printf (" \n \n ********************************************** \n ");
    } while (ch != 7);

    return 0;
}