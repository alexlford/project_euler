/*
The following iterative sequence is defined for the set of positive integers:

n  n/2 (n is even)
n  3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13  40  20  10  5  16  8  4  2  1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
Although it has not been proved yet (Collatz Problem), 
it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include <iostream> 
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std; 
int y = 0;
int t = 0;
int x = 1;
int z = 1;
long int n=1;
long int i=0;


int main() 
{ 
	do{
		int mark = n;
		//cout<< ""<<endl;
		//cout<< "the number is: "<< n <<endl;
		do{ 
			if(n%2==0){n=n/2;}
			else{n=3*n+1;}
			x++;
			//cout<< x <<endl; 
		}while(n!=1);
			if(x>z){z=x; t=mark;}
			//cout<< "answer for: "<< mark <<" is "<< x<<endl;
			x=1;
			i++;
			n=i;
		
	}while(i<1000000);
	
	
cout <<"The answer is : "<< t << endl;
return 0; 
}




