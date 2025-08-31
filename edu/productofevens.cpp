#include <iostream>

using namespace std;

int startofseq, endofseq;
int product = 1; 

int main(){

cout<<"Calculate products of even numbers\n"<<endl;
cout<<"Input start:\n"<<endl;
cin>>startofseq;
cout<<"Input end:\n"<<endl;
cin>>endofseq;

for (int i = startofseq; i<endofseq; i++){
	if(i%2==0){
		product*=i;
	}
}

cout<<product<<endl;

} 










