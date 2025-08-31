#include <iostream>

using namespace std;

int riders, carnum = 1;
int train[11]= {0};

int main(){

	while(carnum<=10){

		cout<<"\n\nInput number of riders in car:"<<carnum<<endl;
		cin>>riders; 
		train[carnum]+=riders;

		cout<<"\nNumber of riders in car "<<carnum<<endl;
		cout<<train[carnum];
		carnum++;
	}

	carnum = 0; 

	while(carnum<=10){
		
		if(train[carnum]>50){
			cout<<"\nCar "<<carnum<<" has OVER 50 people.\n";
			carnum++;
		} 
		else{
			cout<<"\nCar "<<carnum<<" has UNDER 50 people\n";
			carnum++;
		}

	}
}




