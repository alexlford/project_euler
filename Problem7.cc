/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <iostream> 
using namespace std; 
int t,x,y,i;
bool prime;

int main() 
{ 
	y=-1;
	for(i=1; y!=10001; i++)
	{
		prime=true;
		for(x=2; x<i; x++)
			if(i%x==0){prime=false;}
		if(prime==true)
		{
			t=i;
			y=y+1;
			
		}
	}
	
	

	
cout <<"The answer is : "<< t << endl;
return 0; 
}
