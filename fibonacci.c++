#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n, int last = 0, int slast = 1) {
    if (n <= 0) return;

    cout << last << endl;

    fibonacci(n - 1, slast, last + slast);
}

int main() {
    int n;
    cin >> n;
    fibonacci(n+1);
    return 0;
}