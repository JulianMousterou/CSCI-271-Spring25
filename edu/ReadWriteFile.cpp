#include <iostream> 
#include <fstream> 
#include <cstring> 



int main(){

	std::string fileName;
	std::cout<<"Input the path to file.";
	std::cin>>fileName; 
	std::fstream file(fileName);
	std::string fileContent;
	int fileMenu; 

	std::cout<<"What action would you like to perform? 1. Write to file 2. Read file in terminal\n";
	std::cin>>fileMenu; 

	switch(fileMenu){
		case 1: 
			std::cout<<"Input the content you would like to write to file."; 
			std::cin>>fileContent;

			file << fileContent;

			file.close(); 

			break; 

		case 2: 
			std::getline(file, fileContent);
			
			std::cout<<fileContent;

			file.close();

			break;

	}


} 
