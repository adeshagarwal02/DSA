#include <iostream>

int nCr(int n, int r){

	if(r == 0 || n == r){
		return 1;
	}

	return nCr(n-1,r-1) + nCr(n-1,r);
}


int main (void)
{
	int n, r;
	std::cout << "Enter n:";
	std::cin >>n;
	std::cout << "Enter r :";
	std::cin >> r;
	std::cout<<nCr(n,r)<<std::endl;
	return 0;
}
