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
//4

int gcd(int a, int b)
{
	if (a <= 0)
		a = -a;
	if (b <= 0)
		b = -b;
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	if (a > b)
		return gcd(a - b, b);
	else if (b > a)
		return gcd(a, b - a);
}

int fib(int n) {
	if (n == 1) return 1;
	if (n == 2)return 2;

	return fib(n - 1) + fib(n - 2);
}

int pow(int x, int y) {
	if (y < 0)throw "negative exponent \n";

	if (y == 0) return 1;

	return x* pow(x, y - 1);

}
int tri(int n) {
	if (n <= 0)
		throw "negative number \n";

	if (n == 0)
		cout << endl;
	else {

		for (int a = 1; a<= n; a++) {
			for (int b = 1; b <= a; b++) {
				cout << " * ";
			}
			cout << endl;
		}
	}
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

	cout << gcd(5, 4) << endl;

	cout << fib(10) << endl;

	cout << pow(2, 6) << endl;

	cout << tri(5) << endl;



	return 0;
}
