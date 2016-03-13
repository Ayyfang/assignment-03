#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <map>
#include <set>

using std::map;
using std::set;
using std::cout;
using std::string;
using std::endl;
using std::cin;
using std::array;

int divide(int a, int b) {
	if (b == 0)
		throw string("numerator cannot be 0. \n");
	else if (a%b == 0)
		throw string("The number don't have a remainder. \n");
	else {
		return  (a%b);

	}
}

template< class T>
T maximum(T arr[ ], int size) 
{
	T largest = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > largest)
			largest = arr[i];
	}
	return largest;
}


int main() {
	//exception
	int num1, num2;
	int ans;

	cout << "Enter 2 number and it will give the remainder." << endl;
	cin >> num1 >> num2;

	try {
		ans = divide(num1, num2);
		cout << "the answer is " << ans << endl;
	}
	catch (string exception)
	{
		cout << exception;
	}
	

	// template
	int num[10];
	cout << "Enter 10 numbers and I'll will give to the largest number. \n";
	for (int k = 0; k < 10; k++)
	{
		cin >> num[k];
	}
	cout << "The maximum number is " << maximum(num, 10) << endl;
	
	//STL
	string a = " are ";
	string b = " you ";

	cout << a << b << endl;
	std::swap(a, b);
	cout << a << b << endl;




	return 0;
}
