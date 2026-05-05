#include <iostream>

void fun(int n){
	if(n>0)
	{
		std::cout<<n<<" "<<std::endl;
		fun(n-1);

	}

}




int main(void)
{
	fun(5);
	return 0;
}
