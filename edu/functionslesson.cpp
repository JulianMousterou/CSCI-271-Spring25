#include <iostream>
#include <string>


using namespace std;

int grade;
float average;

float Sum_Of_Grade(){
	float grade{0};
	float sum{0};
	for(int i = 1; i<=10; i++){
		cout<<"input grade:";
		cin>>grade;
		sum+=grade;
	}	
	return sum; 
	}
float Average_Grade(float gradeSum, int gradeNum){
	average = gradeSum/gradeNum;
	return average; 
}



int main(){
	float avg{0};
	float sum{0};
	sum = Sum_Of_Grade();
	avg = Average_Grade(sum,10);
	cout<<"Your average is:\n"<<avg<<"\nThe sum is:\n"<<sum<<endl;
}

