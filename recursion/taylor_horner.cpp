#include <iostream>

double expo(double x, double n){
	static double sum = 1;

	if(n == 0){

		return sum;
	}

	sum = 1 + x/n * sum;

	return expo(x, n-1);
}


int main(void){

	std::cout<<expo(2,3)<<std::endl;
	return 0;
}
