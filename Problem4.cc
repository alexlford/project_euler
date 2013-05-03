/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/


#include <iostream> 
#include <cmath>
#include <cstdlib>
#include <sstream>  // Required for stringstreams
#include <string> 

using namespace std; 
int t,x,y,z,v;
string s1,s2;

int main() 
{ 
	for(x=100; x<=999; x++){
		for(y=100; y<=999; y++){
			z=x*y;
			
				std::ostringstream ostr; 
			    ostr << z; 
			    std::string s1 = ostr.str(); 
				s2 = s1;
		   
				{
			    int strlen=s1.length();
			       for(int i=0,ii=(strlen-1); i<=strlen; i)
			       {
			           s2[ii]=s1[i];
			           i++;
			           ii--;
			       }
			   	}
			
			
			if(s1==s2){
				if(z>t){t=z;}
			}
		}
	}
	
	

	
cout <<"The answer is : "<< t << endl;
return 0; 
}