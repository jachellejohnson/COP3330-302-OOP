/* Ja'Chelle Johnson 
COP 3330 
This program finds the roots for quadratic equationo ax^2+bx+c=0 */

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main ()
{
   double a = 1, b = 20, c = 5;
   double x_sol1 = 0.0, x_sol2 = 0.0;
   double descriminant = 0.0; 

   x_sol1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
   x_sol2 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);

   descriminant = pow(b,2)-4*a*c; 

   if(descriminant>=0) //does the equation have a real soultion or nah?
   {
       x_sol1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
       x_sol2 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
   cout << "\nThe two real solutions for the given quadratic equations are: " << endl; 
   cout << left << "first solution ---> "<< setw(4) << right << setprecision(4)<< x_sol1<<endl; 
   cout << left << "second solution ---> "<< setw(4) << right << setprecision(4)<< x_sol2<<endl; 
   }
   else 
   { 
      cout << left << "The given equation does not have a real solution, the descriminant value is: "<< descriminant << endl; 
   }

  

}