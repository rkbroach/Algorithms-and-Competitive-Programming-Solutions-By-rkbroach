// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll int solve(ll int a[], int n, ll int m) {
    // sort array in ascending order
    sort(a, a+n); // log(n)
    
    int min_diff = INT_MAX;
    // sliding window
    for (int i = 0; i+m-1 < n; i++) {
        int diff = a[i+m-1] - a[i];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }
    return min_diff;
}

int main() {
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    ll int a[n];
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    ll int m; cin >> m;
	    cout << solve(a, n, m) << "\n";
	}
	return 0;
}
