

// sort algorithm example
#include <algorithm>    // std::sort
#include "stdlib.h"
#include <iostream>
#include "steffi.hpp"
#include <vector>

int main() {
int myints[] = {32,31,31,45,26,80,53,33};
std::vector<int> myvector (myints, myints+8);     // 32 71 12 45 26 80 53 3

std::vector<int> vect = myvector;
std::sort (vect.begin(), vect.end());

std::vector<int> primvect;
//primvect.push_back(x);

std::cout << vect[0] << std::endl;

/*
//std::cout << vect.size() << std::endl;
int k = 0;
bool same = true;
for(unsigned int a = 0; a<vect.size(); a++){
	//std::cout << a << std::endl;
	while(same){
		if(vect[a] == vect[a+1]){
		same = true;
		k++;
		std::cout << k << std::endl;
		}
		//same = false;
	}
}
*/
/*
		int a = 0;
		int k = 0;
	bool same = true;
		while(same){
			if(vect[a] == vect[a+1]){
			same = true;
			k++;
			std::cout << k << std::endl;
			}
		}
*/
return 0;

}
