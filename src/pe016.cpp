#include <iostream>
#include "math.h"
#include "stdlib.h"
#include <string>


#include "bigint.hpp"




int main()
{
	std::string a,b;

	a="723";
	b="323";
	bigint A(a);
	bigint B(b);
	bigint C(1);
	bigint D(1);

	std::cout << "A.size = " << A.size << std::endl;
	std::cout << "B.size = " << B.size << std::endl;

	A.print();
	B.print();

	C=add_bigint(A,B);
	C.print();
	std::cout << "-------------------------------------" << std::endl;

	D=pow_bigint(2,1000);
	D.print();
	std::cout << "sum of digits = " << sum_digits(D) << std::endl;



	return 0;

}
