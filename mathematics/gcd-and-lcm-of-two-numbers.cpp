/*

██████╗ ██╗  ██╗██████╗ 
██╔══██╗██║ ██╔╝██╔══██╗
██████╔╝█████╔╝ ██████╔╝
██╔══██╗██╔═██╗ ██╔══██╗
██║  ██║██║  ██╗██████╔╝
╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ 

Problem Statement - https://practice.geeksforgeeks.org/problems/lcm-and-gcd/0/?track=sp-mathematics&batchId=152
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    // modulo operator in Euclidean algorithm
    if (b == 0) {
        return a;
    }
    return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
    return (  (a*b) / gcd(a,b)  );
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int T; cin >> T;
	while (T--) {
		ll a, b, x, y; cin >> a >> b;
		x = lcm(a,b);
		y = gcd(a,b);
		
		cout << x << " " << y << "\n";
		
    }
	return 0;
}
