#include <iostream>

//sixth program

int main() 
{
	int  a, b, c, counter;
	counter = 1;
	a = 0;
	b = 100;
	c = (b-a)/2;
	std::cout << "Think of a number between 0 and 100!\n I will guess!\n";
	int x=0;
	{ 
		do
	{	std::cout << "Is your number higher than " << c << "\n" << "1-yes, 2-no, 3-it is equal\n";
		std::cin >> x;	
		

		if (x == 1) {
			if (c==99) {std::cout << "Your number is: 100 \n";
								std::cout << "Number of attempts: " << counter << "\n"; break;
								}
		a=c;
		c=a+(b-a)/2;
		counter++; 

					}

		if  (x == 2) {
			if (c==1)  {std::cout << "Your number is: 0 \n";
								std::cout << "Number of attempts: " << counter << "\n"; break;
								}
		b=c;
		c=b-(b-a)/2;
		counter++;
					
		}

	} while (x!=3); 
	getchar();
	}	  

	 if (x==3) {std::cout << "Your number is: " << c << "\n";
		 std::cout << "Number of attempts: " << counter << "\n";	
				}

	getchar();
	return 0;
}
