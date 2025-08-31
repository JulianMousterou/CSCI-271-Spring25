#include <iostream>
#include <cstdlib> 
#include <cmath> 




int guess = 0; 
int guesses = 0; 
int min = 0;
int max = 100;


int main(){

	std::cout<<"Welcome to guess the number! Enter a number, we will tell you higher/lower until you guess it.\n";
	std::srand(static_cast<unsigned int>(time(0)));	

	int number = min + (std::rand() % (max-min+1));

	while(guess!=number){
		
		guesses+=1;

		std::cin>>guess; 

		if (guess!=number){
	 		if (guess<number){
				std::cout<<"Guess: "<<guesses<<"\nHigher.\n"<<std::endl;
			}	
			if (guess>number){
				std::cout<<"Guess: "<<guesses<<"\nLower.\n"<<std::endl;
			}
		}

		if (guess == number){
			std::cout<<"\nYou won!!!\n";
			break;
			
		}
	}
}

