#include <iostream>
using namespace std;

int fibonacci(int n, int &calls) {
    calls++; // Conta a chamada
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1, calls) + fibonacci(n - 2, calls);
}

int main() {
    int N; 
    cin >> N;

    while (N--) {
        int X;
        cin >> X;

        int calls = -1; 
        int result = fibonacci(X, calls);

        cout << "fib(" << X << ") = " << calls << " calls = " << result << endl;
    }

    return 0;
}
