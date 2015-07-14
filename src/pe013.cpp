#include <iostream>
#include <fstream>
#include "math.h"
#include "stdlib.h"
#include <string>

#include <sys/time.h>
#include "armadillo"



int main()
{
	double numbers[100];
	double sum;
	int i=0;

	std::vector<char> v;

	std::string line;
	std::ifstream myfile ("inputs/pe013.txt");

	if (myfile.is_open())
	{
		while (getline(myfile,line))
		{
			//std::cout << line << "\n" << std::endl;
			numbers[i]=std::stod(line);
			i++;
		}

		myfile.close();
	}
	else std::cout << "Unable to open file" << std::endl;

	sum=0;

	for(i=0; i<100; i++)
	{
		sum+=numbers[i];
	}

	std::cout << sum <<"\n" << std::endl;
	printf("%10f\n",sum);
	return 0;
}
