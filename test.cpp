// this is a cpp file 
#include <iostream>

using namespace std;

int getValue (int);
int main()
{
/*	int n = 0;
	cout <<"enter a number: ";
	cin >> n;
	int out=getValue(n);
	cout <<endl<<out;

for (int k=1; k <=1000; k++)
{
	int exp=0;
	if ((k % 3) == 0)
	  { cout<< "FIZZ";
	exp++;}
	if ((k % 5) == 0)
	{
	   cout<< "BUZZ";
	exp++;}
	if (exp==0)	
	  cout << k << endl;
	else cout <<endl;
}
*/
int n = 0;
cout <<"enter a number: ";
cin >> n;
  int p1 =1;
  int p2 =0;
  int fib=1;
  for (int k=1; k<n; k++)
       {
     fib = p1 +p2;
     p2= p1;
     p1=fib;	
      
	       
} 	
cout <<fib;			
return 0;
}

int getValue(int n )
{
	
	if (n<=1)
	  return n;
	return (getValue(n-1) + getValue(n-2));
}

