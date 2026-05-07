#include <iostream>

double expo(int x, int n){
	static double sum = 1;

	if(n == 0){

		return sum;
	}

	sum = 1 + x * sum /n;

	return expo(x, n-1);
}


int main(void){

	std::cout<<expo(2,3)<<std::endl;
	return 0;
}
