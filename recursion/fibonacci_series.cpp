#include <iostream>

int fibonacci(int n){

	int f0 = 0;
	int f1 = 1;
	int sum; 
	if(n<=1){
		return n;
	}
	for(int i= 2; i <= n; i ++){
		sum = f0 + f1;
		f0 = f1;
		f1 = sum;
	}

	return sum;

}


int main(void)
{
	int n;
	std::cout<<"Enter value of N:";
	std::cin>>n;
	std::cout<<fibonacci(n)<<std::endl;
	return 0;
}
