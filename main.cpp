// Marionna Harris j00976960 
// 264 Programming Assignment 
#include <iostream>
#include <cmath>
using namespace std ;
int main() 
{
  double primenum = 2 || 3 || 5 || 7 || 11|| 13 ||17||19 ||23 || 29 ||31 ;
  

double prime;
double notprime;
int num = 1 ;
  
cout << " Enter a positive number between 1 - 1000 " ;
cin >> prime;
cout << endl;
  if (prime <= 0 || prime > 1000)
  { 
    cout << "Input ";
    cin >> prime ;
    cout << endl;
    }
  if (prime != 2 && prime != 3 && prime !=5 && prime !=7 && prime !=11 && prime != 17 && prime !=19 && prime != 23 && prime != 29 && prime !=31 )
  // ^ this makes sures isn't prime 
  {
    while (num <= 500)
      {
   if (prime != num && prime/3 != num && prime/5 !=  num && prime/7 != num && prime/11 != num && prime/13 != num && prime/17 !=num && prime/19 != num && prime/23  != num && prime /29 != num && prime/29 != num && prime/31 !=num )
   {
     num = num +1;
   }
    else 
   {
     cout << "Output";
       num = num + 501;
   }
        }
    if (num == 501)
    {
      cout << "Output: Number " << prime << " is prime ! " << endl;
      
    }
    num =1 ;
      while (num<=500)
      {
        if (prime/num == 2 || prime/ num ==3 || prime/num == 5 || prime/num == 7 || prime/num == 11 || prime/num ==13 || prime/num == 17 || prime/num == 19 || prime/num == 23 || prime/num == 29 || prime == 31)
        {
          cout << prime / num << " ";
          
        }
        num = num +1;
          
      }
    }
  else 
  {
    cout << " Output : Number" << prime << "is prime" << endl;
  }
 return 0; 
  }

