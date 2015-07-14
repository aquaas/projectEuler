#include <iostream>
#include "math.h"
#include "stdlib.h"
#include <string>
#include <vector>


int main()
{
	unsigned long long D,x,xsq,y,ysq,equal,xMax,xMaxD;
	unsigned long long sqInd, sqBase;
	double integerpart,xpart,ypart,ytemp;
	int Dmax=100;
	std::vector<unsigned long long> xSolutions(Dmax+1);

	x=0; y=1; sqInd=0;
	for(D=2; D<=Dmax; D++){

		equal=0;
		if (modf(sqrt(D), &integerpart) == 0.000) continue;

		ypart=sqrt(D*y*y+1);
		y=1;
		//while ((modf(sqrt(D*y*y+1), &integerpart) !=		 0.000)&&(x*x-D*y*y!=1)) {
		sqInd=ceil(sqrt(D))-1;
		sqBase=sqInd*sqInd;

		while (equal==0){

			sqInd++;
			ypart=sqrt((sqInd*sqInd-1.0)/D);
			//std::cout << "ypart = " << ypart << std::endl;
			if (floor(ypart)==ypart){
				//xsq=sqInd*sqInd;
				x=sqInd;
				equal=1;
			}

			/*
			y++;
			ypart=D*y*y+1;

			if (floor(ypart)==ypart) {
				x=sqrt(D*y*y+1);
				if (x*x-D*y*y==1) {
					equal=1;
				}
			}
			*/

		}

		//x=sqrt(D*y*y+1);


		xSolutions[D-1]=x;
		std::cout << "D = " << D << "  with x = "<< x << "  and y = " << ypart*ypart << std::endl;



	}

	xMax=xSolutions[0];
	xMaxD=0;
	for (std::vector<unsigned long long>::iterator i = xSolutions.begin(); i != xSolutions.end(); i++) {

		if (*i>xMax){
			xMax=*i;
			xMaxD=i-xSolutions.begin();
		}
	}
	std::cout << "D value for biggest x value = "<< xMaxD+1 << "  with x = " << xMax << std::endl;


return 0;

}
