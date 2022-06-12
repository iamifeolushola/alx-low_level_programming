#include "main.h" 
  
 /** 
  * print_line - function to draw a straight line 
  * @n: our arguement 
  * Return: straight line with length dependent on input arguement 
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
