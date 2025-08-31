#include <iostream>

using namespace std;

int main(){

int size {0};

cout<<"Input your shirt size: "<<endl; 
cin>>size;

if (size<52){
    cout<<"Your shirt size fits into the small category";
}
else if (size>=53 && size<=54){
    cout<<"Your shirt size fits into the medium category";
}
else if (size>=55 && size<=57){
    cout<<"Your shirt fits into the large category";
}
else if (size>57){
    cout<<"Your shirt fits into the extra large category";
}





}