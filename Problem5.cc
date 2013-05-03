/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream> 
using namespace std; 
int t,x,y;

int main() 
{ 
	for(x=1; y!=1; x++)
		if(x%4==0){
			if(x%6==0){
				if(x%7==0){
					if(x%8==0){
						if(x%9==0){
							if(x%10==0){
								if(x%20==0){
									if(x%19==0){
										if(x%18==0){
											if(x%17==0){
												if(x%16==0){
													if(x%15==0){
														if(x%14==0){
															if(x%13==0){
																if(x%12==0){
																	if(x%11==0){
																		y=1;
																		t=x;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	
	

	
cout <<"The answer is : "<< t << endl;
return 0; 
}
