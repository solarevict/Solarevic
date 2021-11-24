#include <iostream>
#include <string.h>

int main() 
{

char your_word[20];
char guess_word[20];
char letter;
int j =0;

std::cout << "Enter your word\n";
std::cin >> (your_word);

 while(guess_word != your_word) {
      

	std::cout<< "Enter your letter!\n";
	std::cin >> letter;

	for(int i=0; i< sizeof(your_word);i++) {
	    
		if(letter==your_word[i]) {
			guess_word[i]=your_word[i];
			j++;
		}
		else if (letter!=your_word[i] && guess_word[i]!= your_word[i]) {
			guess_word[i]=char(32); 
		}
	}
	
	if (strcmp(your_word, guess_word)==0) {break;}
	if (j == 0) {std::cout << "There is no such letter. Try again...\n";}
	else {std:: cout << "There is your letter.Well done!\n";
	std::cout  <<  guess_word << "\n";
	j=0;
	}
}
std::cout << "You guessed the word. The answer is:\n" << guess_word;


return 0;
}