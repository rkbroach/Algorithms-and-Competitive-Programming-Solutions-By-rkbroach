// https://www.geeksforgeeks.org/convert-array-into-zig-zag-fashion/

void zigZag(int a[], int n) {
    bool flag = true;
    for (int i = 0; i <= n - 2; i++) {
        // < less than
        if(flag) {
            if (a[i] > a[i+1]) {
                swap(a[i], a[i + 1]);
            }
        } else {
            // > greater than
            if (a[i] < a[i+1]) {
                swap(a[i], a[i+1]);
            }
        }
        // toggle the flag
        flag = !flag;
    }
}
