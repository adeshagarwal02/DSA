#include <iostream>


class array_intdata{

	private:
		int *A;
		int size_;
		int length_;
	public:
		array_intdata(int size = 0){
			if(size > 0){
			size_ = size;
			A = new int[size_];
			}
			else{
				A = new int[1];
				size_ = 0;
			}
			length_ = 0;
		}
		void add(int element){
			
			if(length_ < size_){
				A[length_] = element;
				length_++;
			}
			else{
				std::cout<<"Array is Full"<<std::endl;
			}
		}
		int length(){
			return length_;
		}
		int capacity(void){
			return size_;
		}
		int remove(void){
				length_--;
				return A[length_];
		}

		int &at(int index){
			if(index < length_){
				return A[index];
			}			
			std::cout<<"out of bound error: "<< length_<<std::endl;
			return A[0];

		}
		bool insert(int index, int value){
			if(length_ == size_){
				std::cout<<"out of bound error:"<<std::endl;
				return false;
			}
			else if(index > length_){
				std::cout<<"Index > Length of array:- "<< "Length:"<<length_<<std::endl;
				return false;

			}
			for (int i = length_; i>index; i--){
				A[i] = A[i-1];
			}
			A[index] = value;
			length_++;
			return true;			

		}
		bool del(int index){
			if(index<length_ && index >= 0 ){
				for(int i = index; i<length_-1; i++){
					A[i] = A[i+1];
				}
				length_--;
				return true;
			}
			return false;

		}
		void display(void){
			int count = 0;	
			while(count < length_){
			std::cout<<A[count]<<" ";
				count++;
			}
			std::cout<<std::endl;
		}		

		~array_intdata(){
			delete [] A;
		}
};


int main(void){

	array_intdata arr(3);
	arr.add(5);
	arr.add(6);
	arr.insert(2,7);
	arr.display();
	std::cout<<"current length: "<<arr.length()<<std::endl;
	//std::cout<<arr.capacity()<<std::endl;
	arr.del(2);
	arr.insert(2,3);
	arr.display();
	//arr.at(0) = 1;
	//arr.at(1) = 2;
	//arr.display();
	//arr.add(3);
	//arr.display();
	return 0;
}
