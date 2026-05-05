#include <iostream>

void fun(int n){
	if(n>0)
	{
		fun(n-1);
		std::cout<<n<<" "<<std::endl;

	}

}




int main(void)
{
	fun(5);
	return 0;
}
