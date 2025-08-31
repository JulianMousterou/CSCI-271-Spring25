#include <iostream>

int tripMileage; 

int PlaneTicketPrice(){
	
	std::cout<<"How many miles is the trip?"<<std::endl;
	std::cin>>tripMileage;
	
	if(tripMileage>=5000){
		std::cout<<"The price of your trip is $1500"<<std::endl;
	} 

	else if(tripMileage<5000 && tripMileage>4000){
		std::cout<<"The price of your trip is $1000"<<std::endl;
	} 

	else if(tripMileage<4000 && tripMileage>2500){
		std::cout<<"The price of your trip is $750"<<std::endl;
	} 

	else if(tripMileage<2500){
		std::cout<<"The price of your trup is $250"<<std::endl;
	}

	return 0; 
}
	
int main(){

	PlaneTicketPrice(); 

}
