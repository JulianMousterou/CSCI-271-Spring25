#include <iostream>
using namespace std;
int startofseq, endofseq; 
int main(){
	cout<<"Input number you would like to start from\n";
	cin>>startofseq;
	cout<<"Input number you would like to end at\n";
	cin>>endofseq;
	for (int i=startofseq; i<endofseq; i++){
		if (i%12==0){
			cout<<i<<endl;			
		}
		else{
			continue;
		}
	}
}
