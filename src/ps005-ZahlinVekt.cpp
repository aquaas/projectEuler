/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include "stdlib.h"
#include <iostream>
#include "steffi.hpp"
#include <vector>
#include <algorithm>    // std::sort

using namespace std;


//long
int sameNumb(std::vector<long>, long);

int main()
{	long numb = 77;
 	// the iterator constructor can also be used to construct from arrays:
  	int myints[] = {16,2,77,77,77,29};
  	std::vector<long> vect0 (myints, myints + sizeof(myints) / sizeof(int) );
	sameNumb(vect0, numb);

}



int sameNumb(std::vector<long> v, long number){
	int k = 0;
	for(unsigned int i=0;i<v.size();i++){
	if(v[i] == number){k++;}
	}
	std::cout << k << std::endl;
	return k;
}
