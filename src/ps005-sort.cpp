/* Vektor sortieren

*/

// sort algorithm example
#include <algorithm>    // std::sort
#include "stdlib.h"
#include <iostream>
#include "steffi.hpp"
#include <vector>

int main() {
int myints[] = {32,71,12,45,26,80,53,33};
std::vector<int> myvector (myints, myints+8);     // 32 71 12 45 26 80 53 3

std::vector<int> vect = myvector;
std::sort (vect.begin(), vect.end());



for(unsigned int i = 0; i<vect.size(); i++){
	std::cout << vect[i] << ";" << std::endl;
	}


return 0;
}
