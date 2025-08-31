#include <iostream>

using namespace std; 


int main(){

char grade {0};


cout<<"Enter your grade in letter format: "<<endl; 
cin>>grade;


switch(grade) {
case 'A': case 'B': case:'C'; 
    cout<<"You received a passing grade. Your grade:"<<grade<<endl;

break;
case 'D': case 'F': 
    cout<<"You received a failing grade. Your grade:"<<grade<<endl; 
break;



}



}
