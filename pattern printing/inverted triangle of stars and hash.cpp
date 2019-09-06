/*

██████╗ ██╗  ██╗██████╗
██╔══██╗██║ ██╔╝██╔══██╗
██████╔╝█████╔╝ ██████╔╝
██╔══██╗██╔═██╗ ██╔══██╗
██║  ██║██║  ██╗██████╔╝
╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝

Problem statement - https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/description/
Time Complexity - O(n^2)

*/
#include <bits/stdc++.h>
using namespace std;

int main () {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) { // row
            for (int j = 1; j <= 2*n; j++) {
                if (j <= i || j > 2*n-i) {
                    cout << "*";
                } else {
                    cout << "#";
                }
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
