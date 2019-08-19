/*

██████╗ ██╗  ██╗██████╗
██╔══██╗██║ ██╔╝██╔══██╗
██████╔╝█████╔╝ ██████╔╝
██╔══██╗██╔═██╗ ██╔══██╗
██║  ██║██║  ██╗██████╔╝
╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝

Traditional Sieve of Eratosthenes - O( n log(log n)  )

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;

		bool primes[n + 1];
		memset(primes, true, sizeof(primes));   // set all numbers as prime (true)

		for (int p = 2; p * p <= n; p++) {
			if (primes[p] == true) {
				for (int i = p * p; i <= n; i += p) {
					primes[i] = false;
				}
			}
		}

		for (int p = 2; p <= n; p++) {
			if (primes[p]) {
				cout << p << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}

