/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<ctime>
using namespace std;
  

  const  int a = 2147483647;
  const  int b = 12773;
  const  int c = 2836;
  const  int n = 567;
  
  double func(){
  int a, b, c, n;
    long m = n / b;
    long p = n - b * m;
    long t = a * p - c * m;
    if(t > 0)
    n = t;
    n = t + a;
    return n;
  } 
  int main()
  {
 setlocale(LC_ALL, "ru");
  srand(time(NULL));
  int a,  b,  c,  n;
  double A[10];
  for(int i=0; i<10; i++)
  A[i] = random();
  cout<<"вывод сгенерированных чисел"<<endl;
  for(int i=0; i<10; i++)
  cout<<"результат сгенерированых чисел ="<<A[i]<<endl;
  }