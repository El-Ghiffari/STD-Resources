#include <iostream>

using namespace std;

/*int fibonacci(int n) {
  if (n == 0 || n ==1){
    return n;
  } else {
    return (fibonacci(n-1) + fibonacci(n-2));
  }
}*/

int fib(int n)
{
    const int m = 1000000007;
    int a = 1, b = 1;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b % m;
}

int main()
{
    int N, T;
    cin >> T;
    for (int i = 0; i <= T; i++){
        cin >> N;
        cout << fib(N) << endl;
    }

    return 0;
}
