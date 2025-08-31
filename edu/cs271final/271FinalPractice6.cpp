#include <iostream> 

int startNum, endNum, maximum; 

int multiples[100*100];

int main(){
	
	std::cout<<"Input your starting number:\n";
	std::cin>>startNum;
	std::cout<<"Input your ending number:\n";
	std::cin>>endNum;
	
	


	for(int i = 1; i<endNum; i++){
		
		if (i%12==0){
			multiples[i]=i;
		} 
	}

	maximum=multiples[0];

	for(int i = 0; i<endNum; i++){
		if(multiples[i]>maximum){
			maximum = i;
		}
	}

	std::cout<<"Your maximum is:\n"<<maximum<<std::endl;

}
