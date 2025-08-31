#include <iostream>

using namespace std; 

int main()

{

int roll1 {0};
int roll2 {0};
int losingnumber {7};

cout<<"roll your first dice"<<endl;
cin>>roll1;
cout<<"roll your second dice"<<endl; 
cin>>roll2; 

if ((roll1+roll2)>losingnumber)
cout<<"You win!, your roll was: "<<(roll1+roll2)<<endl;
else
cout<<"Too low, you lost. your roll was: "<<(roll1+roll2)<<endl;

}