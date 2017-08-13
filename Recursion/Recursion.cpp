//
// Created by Roman Malkevych on 8/13/17.
//

#include <iostream>

void    printDepecheMode(int count)
{
	if (count > 0)
	{
		std::cout << count << " Depeche Mode the best!!! " << std::endl;
		count--;
		printDepecheMode(count);
	}
}

void    printOnuka(int count)
{
	if (count > 0)
	{
		count--;
		printDepecheMode(count);
	}
	std::cout << count << " Onuka the best!!! " << std::endl;
}

void    additionalBob(int *count);
void    complexRecursion(int count)
{
	if (count > 0)
	{
		count--;
		additionalBob(&count);
		std::cout << count << ") Biba + Bob" << std::endl;
	}
}

void    additionalBob(int *count)
{
	if (*count % 2 == 0)
		(*count)--;
	complexRecursion(*count);
}

int main()
{
	printDepecheMode(10); // Reverse order
	printOnuka(10); // Gradual order

	complexRecursion(10);
	return ( 0 );
}