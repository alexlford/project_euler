/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream> 
#include <cmath>
#include <cstdlib>
using namespace std; 
int x = 2;
int i;
long y=600851475143;
int t = 0;
bool prime;

int main() 
{ 
	for(i=1; i<=100000; i++)
	{
		prime=true;
		for(x=2; x<i; x++)
			if(i%x==0){prime=false;}
		if(prime==true)
		{
			if(y%x==0){t=x;}
			
		}
	}
	
cout <<"The answer is : "<< t << endl;
return 0; 
}