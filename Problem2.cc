/*
Each new term in the Fibonacci sequence is generated by adding 
the previous two terms. 
By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values 
do not exceed four million, find the sum of the even-valued terms.
*/

#include <iostream> 
#include <cmath>
#include <cstdlib>
using namespace std; 
int x = 1;
int y = 2;
int z = 0;
int t = 0;

int main() 
{ 
	do{
		if (y%2 == 0){
			t = y+t;
		}
			z = y;
			y = y + x;
			x = z;
	}
			while(y<4000000);
cout <<"The answer is : "<< t << endl;
return 0; 
}