#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

size_t taijie(size_t n) {
    size_t
        n1 = 0,
        n2 = 1;

    for (size_t x = 0; x < n; x++) {
        size_t cache = n1;
        n1 = n2;
        n2 += cache;
    }
    return n2;
}
int main()
{
    int a;
    cin >> a;
    cout << taijie(a) << endl;
	return 0;
}