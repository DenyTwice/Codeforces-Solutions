#include <bits/stdc++.h>

using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                int num = n;
                int palindrome = 0;

                while (n) {
                        palindrome = palindrome*10 + n % 10;
                        n /= 10;
                }

                if (palindrome == num) {
                        cout << "Yes\n";
                } else {
                        cout << "No\n";
                }
        }
        return 0;
}
