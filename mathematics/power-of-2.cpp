/*

██████╗ ██╗  ██╗██████╗ 
██╔══██╗██║ ██╔╝██╔══██╗
██████╔╝█████╔╝ ██████╔╝
██╔══██╗██╔═██╗ ██╔══██╗
██║  ██║██║  ██╗██████╔╝
╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ 

Problem Statement - https://practice.geeksforgeeks.org/problems/power-of-2/0/?track=sp-mathematics&batchId=152

*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int T; cin >> T;
	while (T--) {
		ll n; cin >> n;
		bool bitAnd = n & (n - 1);
		
		// n on left is for case when n = 0
		if(n && !bitAnd) {
		    cout << "YES" << "\n";
		} else {
		    cout << "NO" << "\n";
		}
    }
	return 0;
}
