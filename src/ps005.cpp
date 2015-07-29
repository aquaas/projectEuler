/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include "stdlib.h"
#include <iostream>
#include "steffi.hpp"
#include <vector>


using namespace std;


//long
std::vector<long> primFakt(long);

int main()
{
	long numb = 10;
	std::vector<long> vect;
	vect = primFakt(numb);
	for(unsigned int i = 0; i<vect.size(); i++){
		std::cout << vect[i] << ";" << std::endl;
}
/*
	while(remainder != 0)
	{
	
	}
	return 0;
*/
	


}

std::vector<long> primFakt(long numb)
{	
//Programm fuer das Herausfinden von Primzahlen
	//int prim = 2;
	long  x,i;
	std::vector<long> v;	
	for(x=2; x<=numb;x++)
	{
		
		for(i = 2; i<=x; i++)
		{
		if(x%i == 0) break;
		//std::cout << i << std::endl;
		}
			if(i==x) {
				//printf("%i ist eine Primzahl.\n", x);
				while(numb%i==0){
				numb = numb/x;
				//std::cout<< numb <<sftd::endl;
				v.push_back(x); //fügt x ans Ende von v an.
				// printf("%d ist Primfaktor von numb. \n",x);
				}
			}
	}
	return v;
}

