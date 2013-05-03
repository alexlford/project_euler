/*
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers 
and the square of the sum is 3025  385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural 
numbers and the square of the sum.
*/

#include <iostream> 
using namespace std; 
int t,x,y,z,w;


int main() 
{ 
	z=0;
	w=0;
	for(x=1; x<=100; x++){
		z=z+x*x;
	}
	for(y=1; y<=100; y++){
		w=w+y;
	}
	t=w*w-z;

	
cout <<"The answer is : "<< t << endl;
return 0; 
}
