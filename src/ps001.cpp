// // If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// // Find the sum of all the multiples of 3 or 5 below 1000.


#include "stdlib.h"
#include <iostream>
#include "steffi.hpp"

//using namespace std;





int main()
{	
	int number = 1000; int result=0;
	for(int i=3; i<number; i+=3){
		if(i%15 == 0){
		}else{result = result + i;
		}
		//std::cout << result << std::endl; 
	}
	for(int i=5; i<number; i+=5){
	result = result + i;
	//std::cout << result << std::endl;
	}
	std::cout << result << std::endl;
	return 0;
}
