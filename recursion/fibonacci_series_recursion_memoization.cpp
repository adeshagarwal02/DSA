#include <iostream>

#include <array>

std::array<int,10> f;

int fibonacci(int n)
{
	if(n <= 1){
		f[n] = n;
		return n;
	}
	else {
		if(f[n-2] == -1){
			f[n-2] = fibonacci(n-2);
		}
		if(f[n-1] == -1){
			f[n-1] = fibonacci(n-1);
		}
	}
	f[n] = f[n-2] + f[n-1];
	return f[n]; 
}

int main(void){

	f.fill(-1);
	std::cout<<fibonacci(7)<<std::endl;
	return 0;
}
