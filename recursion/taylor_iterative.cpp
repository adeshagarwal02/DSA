#include <iostream>

double expo(int x, int n){
	
       double sum = 1;

	while(n>0){
		sum = 1 + x * sum / n;
		n--;
	}
	return sum;
}


int main (void){
	std::cout<<expo(1,10)<<std::endl;
	return 0;
}
