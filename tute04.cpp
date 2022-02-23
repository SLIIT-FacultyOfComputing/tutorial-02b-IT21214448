/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);//function prototype
long nCr(int n, int r);

int main() {
  int n, r;//assign variables
  std::cout << "Enter a value for n ";//user input
  std::cin >> n; 
  std::cout << "Enter a value for r ";//user input
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r); //function calling
  std::cout << std::endl;
  return 0;
}
long Factorial(int no) //function called 
{
 int fac=1;
 for (int r=no; r >= 1; r--)
   {
        fac = fac * r;
   }
return fac;
}
long nCr(int n, int r)//function called 
{
  return Factorial(n)/(Factorial(r)*Factorial(n-r));
  
}