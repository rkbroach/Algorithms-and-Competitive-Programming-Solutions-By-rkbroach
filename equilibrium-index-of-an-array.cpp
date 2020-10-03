  
/**
     | |  | |                        | |    
 _ __| | _| |__  _ __ ___   __ _  ___| |__  
| '__| |/ / '_ \| '__/ _ \ / _` |/ __| '_ \ 
| |  |   <| |_) | | | (_) | (_| | (__| | | |
|_|  |_|\_\_.__/|_|  \___/ \__,_|\___|_| |_|
**/
// https://practice.geeksforgeeks.org/problems/equilibrium-index-of-an-array/0

int findEquilibrium(int a[], int n) {
    int arraySum = 0, leftSum = 0;
    
    // Entire Array Sum
    for (int i = 0; i < n; i++) {
        arraySum += a[i];
    }
    
    for (int i = 0; i < n; i++) {
        // right sum at index i
        arraySum -= a[i];
        
        // answer
        if (leftSum == arraySum) {
            return i;
        }
            
        // left sum at index i
        leftSum += a[i];
    }
    
    // not found
    return -1;
}

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    cout << findEquilibrium(a,n) << "\n";
  }
}
