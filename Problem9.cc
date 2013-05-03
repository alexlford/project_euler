/*
A Pythagorean triplet is a set of three natural numbers, a  b  c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream> 
#include <cmath>
#include <cstdlib>
using namespace std; 
double t,c,b,a,d,c2;

int main() 
{ 
	for(a=1; a<1000; a++){
		for(b=a+1; b<1000; b++){
			c2=a*a+b*b;
			c=sqrt(c2);
			d=a+b+c;
			t=a*b*c;
			if(d==1000){cout << t << endl;}
			
		}
	}

return 0; 
}
