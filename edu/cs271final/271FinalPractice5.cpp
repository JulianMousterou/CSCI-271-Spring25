#include <iostream> 

int startNum, endNum;

int main(){

	std::cout<<"Input starting number:\n";
	std::cin>>startNum;
	std::cout<<"Input end number;\n";
	std::cin>>endNum;

	for (int i = 0; i<endNum; i++){
		if(i%10==0){
			std::cout<<"A multiple is:\n"<<i<<std::endl;
		}  
	}

}
