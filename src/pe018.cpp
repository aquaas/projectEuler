#include <iostream>
#include "math.h"
#include "stdlib.h"
#include <string>


#include <armadillo>



using namespace arma;
int main()
{

	imat A,B;




	A << 75 << endr
	  <<95<< 64 << endr
	  <<17<< 47<< 82<<endr
	  <<18<< 35<< 87<< 10<<endr
	  <<20<< 04<< 82<< 47<< 65<<endr
	  <<19<<  1<< 23<< 75<<  3<< 34<<endr
	  <<88<<  2<< 77<< 73<<  7<< 63<< 67<<endr
	  <<99<< 65<<  4<< 28<<  6<< 16<< 70<< 92<<endr
	  <<41<< 41<< 26<< 56<< 83<< 40<< 80<< 70<< 33<<endr
	  <<41<< 48<< 72<< 33<< 47<< 32<< 37<< 16<< 94<< 29<<endr
	  <<53<< 71<< 44<< 65<< 25<< 43<< 91<< 52<< 97<< 51<< 14<<endr
	  <<70<< 11<< 33<< 28<< 77<< 73<< 17<< 78<< 39<< 68<< 17<< 57<<endr
	  <<91<< 71<< 52<< 38<< 17<< 14<< 91<< 43<< 58<< 50<< 27<< 29<< 48<<endr
	  <<63<< 66<< 04<< 68<< 89<< 53<< 67<< 30<< 73<< 16<< 69<< 87<< 40<< 31<<endr
	  << 4<< 62<< 98<< 27<< 23<<  9<< 70<< 98<< 73<< 93<< 38<< 53<< 60 << 04 << 23 << endr;

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
