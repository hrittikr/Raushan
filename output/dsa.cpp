// compound assignment operators

#include <iostream>
using namespace std;

int main ()
// {
//   int a, b=3;
//   a = b;
//   a+=2;             // equivalent to a=a+2
//   cout << a;

// declare variables
// {
// int a =12 ,  b = 25;
//  cout <<"a="<<a<<endl;
//  cout <<"b="<<b<<endl;
//  cout <<"a&b = "<<(a&b)<<endl;   
//   return 0;
{
int a = 2 , b = 3;
cout <<"before swapping a= "<<a<< " b= "<<b<<endl;

int temp;
temp =  a;
a = b;
b = temp;
cout <<"after swapping a= "<<a<< " b= "<<b<<endl;    

return 0;

}
