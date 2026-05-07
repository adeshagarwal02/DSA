// Excerssive Recursion

#include <iostream>


int fibonacci(int n){

	if(n <= 1){
		return n;
	}
	return fibonacci(n-2) + fibonacci(n-1);
}


int main(void){

	int n;

	std::cout<<"enter the value of N:";
	std::cin>>n;
	std::cout<<fibonacci(n)<<std::endl;
	return 0;
}

