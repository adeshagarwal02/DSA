#include <iostream>

int fun(int n){

	if(n > 100){
		return n - 10;
	}
	return fun(n+1);
}





int main(void){

	std::cout<<fun(1)<<std::endl;
	return 0;
}
