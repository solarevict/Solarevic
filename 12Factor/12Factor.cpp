#include<iostream>
#include<string>
int main()
{
	std::cout << "Enter a non-negative number under 1000.\n  ";
	for (int i = 0; i < 1000 ; i++)
	{

	std::string number;
	int k = 0;
    std::cin >> number;
	int lens = number.length();
	for (int l = 0; l <= lens; l++)
	{
		if(!isdigit(number[l]) && number[l] != '\0' && number[l] != '-')
		{ 
			k++;
		}
	}
	if (k != 0)
	{
		std::cout << "You entered a string or non-integer number. Enter a natural number\n";
	}
	if (k == 0)
	{
		int integer = std::stoi(number);
		if (integer < 0)
		{
			std::cout << "You entered a negative number. Eneter a positive one\n";
		}
		if ( integer == 0 )
		{
			std::cout << "Your factorial is 1.\n"; 
			break;
		}
		if (integer > 0 )
		{
		    float  factor = 1;
			for (int j = 2; j <= integer; j++)
			{
				factor = factor*j;
			}
			std::cout << "Your factorial is: " << factor << "\n"; 
			break;
		}
		if (integer > 1000)
		{
			std::cout << "This number is more than 1000. Enter a smaller number.\n";
		}
	}
	}
	return 0;
}