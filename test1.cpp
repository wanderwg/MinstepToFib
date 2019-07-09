#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1000;
int Fib[N];
int main()
{
	Fib[0] = 1;
	Fib[1] = 1;
	for (int i = 2; i < N - 1; ++i) {
		Fib[i] = Fib[i - 1] + Fib[i - 2];
	}
	int n;
	while (cin >> n) {
		int i = 0;
		for (; i < N - 1; ++i) {
			if (Fib[i] <= n && Fib[i + 1] >= n)
				break;
		}
		int mincount = min((n - Fib[i]), (Fib[i + 1] - n));
		cout << mincount << endl;
	}
	return 0;
}