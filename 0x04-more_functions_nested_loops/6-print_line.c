#include "main.h" 
  
 /** 
  * print_line - this draws a straight line `n` times
  * @n: the number of lines
  * Return: no return.
  */ 
 void print_line(int n) 
 { 
         int i; 
  
         if (n <= 0) 
         { 
                 _putchar('\n'); 
         } 
         else 
         { 
                 for (i = 1; i <= n; i++) 
                 { 
                         _putchar('_'); 
                 } 
                 _putchar('\n'); 
         } 
 }
