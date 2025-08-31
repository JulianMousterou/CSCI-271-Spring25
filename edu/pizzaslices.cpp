#include <iostream>
#include <cmath>
using namespace std; 
double totalSlices,Slices; 
int main(){
	for(int i=0; i<20; i++){
		cout<<"How many slices?"<<endl;
		cin>>Slices;
		totalSlices+=Slices;
	} 
	cout<<"The number of whole pizzas needed:\n"<<ceil(totalSlices/8)<<endl;
	cout<<"The number of slices needed:\n"<<totalSlices<<endl;
}
