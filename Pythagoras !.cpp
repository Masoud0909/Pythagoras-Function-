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
