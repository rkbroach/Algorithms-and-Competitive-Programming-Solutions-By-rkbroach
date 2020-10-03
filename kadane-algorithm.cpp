/**
     | |  | |                        | |    
 _ __| | _| |__  _ __ ___   __ _  ___| |__  
| '__| |/ / '_ \| '__/ _ \ / _` |/ __| '_ \ 
| |  |   <| |_) | | | (_) | (_| | (__| | | |
|_|  |_|\_\_.__/|_|  \___/ \__,_|\___|_| |_|

**/
// https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
#include <bits/stdc++.h>
using namespace std;

int solve (int a[], int n) {
    int global_max = a[0], local_max = a[0];
    
    for (int i = 1; i < n; i++) {
        local_max  = max(a[i], local_max + a[i]);
        global_max =  max(local_max, global_max);
    }
    return global_max;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    int result = solve(a, n);
	    cout << result << "\n";
	}
	return 0;
}

