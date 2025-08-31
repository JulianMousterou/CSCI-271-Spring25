#include <iostream> 

int main(){

	int i; 
	int arr[5] = {1,2,3,4,5};
	int *ptr = arr; 

	std::cout<<"Original array:\n";
	
	for(i=0; i<5; i++){
		std::cout<<arr[i]<<std::endl; 
	}
	std::cout<<"Modified array:\n"; 
	for (i=0; i<5; i++){
		std::cout<<*(ptr+i) + 5 << std::endl;
      	}



} 
