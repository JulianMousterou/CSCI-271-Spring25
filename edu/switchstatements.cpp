//if else = double selection 
//if = single selection
// if, else if, else = multiple selection 

//if takes bool

//SWITCH STATEMTNS 

//takes a variable and checks what cases it matches. 

//takes an integral expression, not bool


//integers and characters can be used in the integral expression. The reason it takes characters is because of ascii characters which are mapped to a number,
//


#include <iostream>
using namespace std;


int main() { 

int gamescore {0} , bonus{0};

cout<<"Enter score (1000-5000)"<<endl;
cin>>gamescore;


switch(gamescore/1000) { 
    case 1: cout<<"The bonus is 1\n" , bonus=100;
    break;
    case 2: cout<<"The bonus is 2\n" , bonus=200;
    break;
    case 3: cout<<"The bonus is 3\n" , bonus=300;
    break;
    case 4: cout<<"The bonus is  4\n" , bonus=400;
    break;
    case 5: cout<<"The bonus is  5\n"; bonus=500; 
    break;


    default: cout<<"invalid number"<<endl; 

}

cout<<"your gamescore\n"<<gamescore<<endl;
cout<<"your bonus is \n"<<bonus<<endl; 




}






