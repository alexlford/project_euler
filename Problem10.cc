/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/



#include <iostream> 
#include <cmath>
#include <cstdlib>
using namespace std; 
int x = 2;
int i,v;
long int t = 2;
bool prime;


int main() 
{ 
	for(i=2; i<2000000; i++)
	{
		prime=true;
				if(i%2==0){prime=false;}
						else{
		for(x=2; x<=int(sqrt(i)); x+=1 )
			if(i%x==0){prime=false;}
				}
		if(prime==true)
		{
			t+=i;
			//cout<<i<<endl;
			
		}
	}
	

	
cout <<"The answer is : "<< t << endl;
return 0; 
}




