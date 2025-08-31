#include <iostream>
#include <cmath>
int pizzaRequest[21];
double Slices=0, totalSlices=0;

int main(){

	for(int i = 1; i<21; i++){
		std::cout<<"How many slices for student"<<i<<std::endl;
		std::cin>>Slices;
		pizzaRequest[i]=Slices; 
		totalSlices+=Slices;
		
	}  

	std::cout<<"Amount of total slices: "<<totalSlices<<"Amount of pies needed: "<<std::ceil(totalSlices/8)<<std::endl;


}
