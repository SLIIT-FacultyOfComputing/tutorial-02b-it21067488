/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/
/*
#include <iostream>
using namespace std;

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  cout << "Enter a value for n ";
  cin >> n;
  cout << "Enter a value for r ";
  cin >> r;
  cout << "nCr = ";
  cout << nCr(n,r);
  cout << std::endl;
  return 0;
}*/
#include <iostream>
using namespace std;
 
int fact(int);
 
int main(void)
{
 int n,r,ncr;
 
  	cout<<"Enter a number n : ";
  	cin>>n;
 cout<<"Enter a number r : ";
  	cin>>r;

  	ncr=fact(n)/(fact(r) * fact(n-r));
    cout<<"Value of "<<n<<r<<"="<<ncr;
}
 
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}