#include <iostream>
#include <fstream>
#include "math.h"
#include "stdlib.h"
#include <string>


#include <armadillo>



using namespace arma;
int main()
{
	int k,L,N;
	imat A(100,100);
	imat B;
	int nLines=100;

	std::string line;
	std::ifstream file ("inputs/pe067_triangle.txt");
	if (file.is_open())
	{
		k=0;
		while ( std::getline (file,line) )
	    {
	    	L=line.length();
			if (k==0) {
				A(0,0)=std::stoi(line);
				std::cout << A(0,0) << std::endl;
			}
			else {
				N=(L-k)/2;
				for(int i=0; i<N; i++) {
					A(k,i)=std::stoi(line.substr(i*3,i*3+2));
					//std::cout << A(k,i) << std::endl;
				}

			}
			k++;
	    }
	    file.close();
	}

	else std::cout << "Unable to open file";


	B=A;

	int nRows,nCols;
	nRows=A.n_rows;
	nCols=A.n_cols;

	for (int row = nRows-2; row >= 0; row--) {
		for(int col = 0; col < nCols-1; col++){
			B(row,col)+=std::max(B(row+1,col),B(row+1,col+1));
		}
	}
	std::cout << "max path sum = " << B(0,0) << std::endl;
	//A.print();
	return 0;

}
