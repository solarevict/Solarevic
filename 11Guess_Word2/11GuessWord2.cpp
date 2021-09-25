##include <iostream>
#include<string>

using namespace std;
int main()
{
	string your_word;
	string guess_word;

	cout << "Enter your word!\n";
	cin >> your_word;
    guess_word.append(sizeof(your_word), ' ');

	while(guess_word != your_word)
	{
		cout << guess_word << "\n";
		cout << "Enter your letter.\n";
		string data;
		cin >> data;
		char letter;

		if(sizeof(data)>1)
		{ 
			if(data == your_word) 
		break;
			else 
			{
				cout << "You did not guess the word.\n";
				return 0;
			}
		}
		else 
		{
			letter = data[0];
		}

	bool mark = false;

	for(int i=0;i < sizeof(your_word);i++) 
	{
		if(letter == guess_word[i])
		{
			cout << "You already tried this letter. Try again.\n";
			mark = true;
			break;
	}
		if(your_word[i] == letter)
		{
			guess_word = letter;
			mark = true;
		}
	}
	if(mark == false) 
	
		cout << "There is no such letter.\n";
	}
	cout << "You guessed the word! Your word is: \n" << guess_word << "\n";

 return 0;
	}