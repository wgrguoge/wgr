#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

size_t �׳˵���(size_t n) {
    size_t result = 1;
    for (size_t x = n; x > 0 ; x--)
        result *= x;
    return result;
}

int main()
{
    size_t m;
    cin >> m;
    cout << �׳˵���(m) << endl;
}