#include <iostream>

using namespace std; 

int main(){

int inputsize {0};

cout<<"Input size: "<<endl;
cin>>inputsize;

switch(inputsize){
 case 1: case 2: case 3: case 4:;
    cout<<"your size is small"<<endl;
    break;
}

switch(inputsize){
 case 5: case 6: case 7:;
    cout<<"Your size is medium"<<endl;
    break;
}

switch(inputsize){
case 8: case 9: case 10:;
    cout<<"Your size is large"<<endl; 
    break;
}



}