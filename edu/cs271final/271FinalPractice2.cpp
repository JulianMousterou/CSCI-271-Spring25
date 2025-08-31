#include <iostream> 

double temps[366] = {0};
double temp; 
double maximum;

int daycount = 0;

int main(){

	while (daycount<=365){
		std::cout<<"Input temperature for day "<<daycount<<std::endl;
		std::cin>>temp; 
		temps[daycount]+=temp;
		daycount++;
	}

    	maximum = temps[0];
    	for (int i = 1; i < 365; i++) {
        	if (temps[i] > maximum) {
            		maximum = temps[i];
        	}
    	
	}

	std::cout<<"The maximum is: "<<maximum<<std::endl;
}
