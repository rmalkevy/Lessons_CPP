//
// Created by Roman Malkevych on 8/9/17.
//
#include <iostream>

using namespace std;

// Sorting Fuctions

void    lessMySort (int &x, int &y)
{
	if (x > y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
}

void    greaterMySort (int &x, int &y)
{
	if (x < y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
}

void    sort (int *arr, int n, void (*f)(int &, int &))
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
//			cout << i << endl;
			f(arr[i], arr[j]);
		}
	}
}

int main()
{
	// Declare and initialize references to functions
//	void (*lessPtr) (int &, int &) = lessPtr;
//	void (*greaterPtr) (int &, int &) = greaterPtr;

	int arr[5] = {10, 32, 15, 93, 42};

//	cout << "start" << endl;
	// Sorting less
	sort (arr, 5, &lessMySort);


	//View
	for (int &num : arr)
	{
		cout << num << " ";
	}
	cout << endl;

	// Sorting greater
	sort (arr, 5, &greaterMySort);

	// View
	for (const auto &num : arr)
	{
		cout << num << " ";
	}
	cout << endl;
}