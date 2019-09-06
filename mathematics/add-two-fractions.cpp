/*

██████╗ ██╗  ██╗██████╗ 
██╔══██╗██║ ██╔╝██╔══██╗
██████╔╝█████╔╝ ██████╔╝
██╔══██╗██╔═██╗ ██╔══██╗
██║  ██║██║  ██╗██████╔╝
╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ 

Time Complexity - O(1)
Problem Statement - https://practice.geeksforgeeks.org/problems/add-two-fractions/1/?ref=self

*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { 
    if (b == 0) 
        return a; 
    return gcd(b, a%b); 
} 

int lcm (int a, int b) {
    return ( (a*b) / gcd(a,b) );
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int T; cin >> T;
	while (T--) {
		int num1, den1, num2, den2; cin >> num1 >> den1 >> num2 >> den2;
		
		int denX = lcm(den1, den2); 
		int numX = (num1)*(denX/den1) + (num2)*(denX/den2); // order of this formula matters
	
		// simplification  
		int common_factor = gcd(numX,denX); 
		denX = denX/common_factor; 
		numX = numX/common_factor; 

		// print
		cout << numX << "/" << denX << "\n";
		
    }
	return 0;
}
