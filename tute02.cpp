/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
using namespace std;
int main()
{
   double salary, netSalary;//assign variables
   int etype, otHrs, otRate;
   cout<<"Enter Employee Type : ";//user input
   cin>>etype;
   cout<<"Enter Salary  : ";//user input
   cin>>salary;
   cout<<"Enter OtHrs : ";//user input
   cin>>otHrs; 
   
   switch (etype) { //selection
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;//calculate net salary
   cout<<"Net Salary is "<<netSalary;//display net salary
  
   return 0;
}
