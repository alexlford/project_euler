/* 
If we list all the natural numbers below 10 
that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/


#include <iostream> 
#include <cmath>
#include <cstdlib>
using namespace std; 

int x = 0;
int y = 3;
int z = 5;
int t = 0;
int main() 
{ 
	do{
		if (x%y == 0){
			t = x+t;
		}
			else{
				if(x%z == 0){
					
				t = x+t;
				}
			}
				
		x = x+1;
	}
	while(x<1000);
cout <<"The answer is : "<< t << endl;
return 0; 
}