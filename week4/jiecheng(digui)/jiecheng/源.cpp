#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return factorial(n - 1) * n; 
}
int main() 
{
	int a;
	cin >> a;
	cout << factorial(a) << endl;
	return 0;
}