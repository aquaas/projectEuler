// Big Num Class , by Achim
#ifndef _BIGNUM_H_INCLUDED__   // include guard
#define _BIGNUM_H_INCLUDED__

#include "stdlib.h"
#include <string>
#include <vector>
#include <algorithm>
#include "math.h"

//Header
class bigint
{
public:
    long size;
    std::vector<char> digits;

    //constructors
    bigint (std::string);
    bigint (long long);


    bigint add_bigint(bigint,bigint);
    bigint pow_bigint(long, long);

    long sum_digits(bigint);

    void print();




};


// Code
bigint::bigint(std::string value) // constructor via string
{
    //int i;
    digits.resize(value.length());
    size=value.length();

    std::reverse(value.begin() ,value.end()); //flip input string

    for (unsigned long i = 0; i < value.length() ; i++) {
        //digits[i]=atoi(value[i]);
        digits[i]=value[i]-'0';

    }

}

bigint::bigint(long long initSize) // contructor via size and zeros
{
    //int i;
    digits.resize(initSize);
    size=initSize;

    for (long i = 0; i < size ; i++) {
        digits[i]=0;
    }
}


bigint add_bigint(bigint a, bigint b)
{
	bigint c(std::max(a.size,b.size)+1);

	int i;
	int temp;

	for(i=0; i<std::max(a.size,b.size); i++ )
	{
		temp=a.digits[i]+b.digits[i];

		if (temp>9) {
			c.digits[i]=temp%10;
			c.digits[i+1]++;
		}
		else c.digits[i]=temp;

	}
	return c;
}

bigint pow_bigint(long base, long power)
{
	int initsize=ceil(log10(base)*(double)power);
	int temp;
	bigint c(initsize);



	c.digits[initsize-1]=base;

	for(long i=0; i<power-1; i++) {
		for(long pos=0; pos<initsize; pos++) {

			if (c.digits[pos]!=0) {

				temp=c.digits[pos]*2;
				if (temp>9) {
					c.digits[pos]=temp%10;
					c.digits[pos-1]++;
				}
				else c.digits[pos]=temp;
			}

		}

	}
    std::reverse(c.digits.begin() ,c.digits.end());
    return c;


}

long sum_digits(bigint a)
{
    long i,S;
    S=0;

    for (i=0; i<a.size; i++){
        S+=a.digits[i];
    }

    return S;
}


void bigint::print()
{
    int i;


    //std::reverse(this->digits.begin() ,this->digits.end()); //flip input string

    for(i=this->size-1; i>=0; i--){
        std::cout << (int)this->digits[i];

    }
    std::cout << std::endl;


}





#endif
