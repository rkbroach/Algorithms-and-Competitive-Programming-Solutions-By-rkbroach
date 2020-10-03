#include <iostream>
using namespace std;

int subarraySum (int a[], int n, int global_sum) {
    int local_sum = a[0], start = 0;
    
    for (int i = 1; i <= n; i++) {
        // If local_sum exceeds the global_sum, 
        // then remove the starting element in window 
        while (local_sum > global_sum && start < i - 1) {
            local_sum -= a[start];
            start++; //slide the window forward
        }
        
        // If local_sum matches global_sum, ans found
        if (local_sum == global_sum) {
            cout << start + 1 << " " << i <<  "\n";
            return 1;
        }
        
        // Add current element to local_sum
        if (i < n) {
            local_sum += a[i];
        }
    }
    // No result found
    cout << "-1" << "\n";
    return 0;
}

int main() {
	int t; cin >> t;
	while (t--) {
	    int n, s; cin >> n >> s;
	    
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    
	    subarraySum(a, n, s);
	}
	return 0;
}
