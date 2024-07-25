/*Write a function bool Pythagoras (int a, int b, int c) {…}
that takes three integers as parameters, and checks if they are the sides of a right triangle (That is a2 = b
2 + c
2
or b
2 = a
2 + c
2 or c
2 = a
2 + b
2
. Make sure all values passed to the function are legit. Incorporate the function in
a program that reads 3 integers and prints whether they are distinct.*/

#include <iostream>

using namespace std;

bool Pythagoras(int a, int b, int c)
{
	bool legit = false;
	if (a > 0 && b > 0 && c > 0) {
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
			legit = true;
			cout << "You have the right triangle";
			return true;
		}
		else
			legit = false;
		cout << "Youre triangle is Wrong";
		return false;

	}
	else
		cout << "numbers not legit"; 

}

int main()
{
	int a, b, c;
	cout << "Please enter three LEGIT values :  ";
	cin >> a >> b >> c;
	
	Pythagoras(a, b, c);
	
}
