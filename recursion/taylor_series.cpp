#include <iostream>

double exponent(int x, int n){

	static double p = 1;
	static double f = 1;

	double r; 

	if(n == 0){

		return 1;
	}
	r = exponent(x, n-1);
	p = p*x;
	f = f*n;

	return r + (p/f);

}

int main(void){

	std::cout<<exponent(4,15)<<std::endl;
	return 0;
}
