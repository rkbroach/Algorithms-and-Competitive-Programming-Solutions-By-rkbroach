// https://practice.geeksforgeeks.org/problems/max-circular-subarray-sum/0

#include <iostream>
using namespace std;

int maxCircularSum (int a[], int n, int arraySum) {
    
    // Corner case
    if (n == 1) {
        return a[0];
    }
    
    int local_max = a[0], global_max = a[0];
    int local_min = a[0], global_min = a[0];
    
    
    // Kadane's Algo to find max subarray sum.
    for (int i = 1; i < n; i++) {
        local_max = max(a[i], local_max + a[i]);
        global_max = max(local_max, global_max);
    }
    
    // Kadane's Algo to find min subarray sum.
    for (int i = 1; i < n; i++) {
        local_min = min(a[i], local_min + a[i]);
        global_min = min(local_min, global_min);
    }
    
    // Case 1 : No Wrapping is present - global_max
    // Case 2 : Wrapping is present - (arraySum - global_min)
    if (global_min == arraySum) {
        return global_max;
    }
    return max ( global_max , (arraySum - global_min) );
}


int main() {
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    int a[n];
	    int arraySum = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	        arraySum += a[i];
	    }
	    
	    // Max Contiguous Sum
	    int circularMax = maxCircularSum(a, n, arraySum);
	    
	    cout << circularMax << "\n";
	}
	return 0;
}
