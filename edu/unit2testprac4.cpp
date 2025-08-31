#include <iostream>

using namespace std; 

int main() {

int a {0};
int b {0};
int c {0};

cout<<"input number a"<<endl;
cin>>a;
cout<<"input number b"<<endl;
cin>>b;
cout<<"input number c"<<endl;
cin>>c; 


if (a>c && a>b){
    cout<<"The highest number is a"<<endl;
}

if (b>c && b>a){
    cout<<"The highest number is b"<<endl;
}

if (c>a && c>b){
    cout<<"The highest number is c"<<endl;
}



} 