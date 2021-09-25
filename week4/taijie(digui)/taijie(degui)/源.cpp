#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int t(int a)
{
	if (a == 0)
		return 0;
	else if (a == 1)
		return 1;
	else if (a == 2)
		return 2;
	return t(a - 1) + t(a - 2);
}
int main()
{
	int n;
	cin >> n;
	cout << t(n) << endl;
	return 0;
}