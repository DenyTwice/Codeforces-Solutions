#include <bits/stdc++.h>

using namespace std;

int main()
{
        int n;
        cin >> n;

        if (n % 400 == 0 || n % 4 == 0 && n % 100) {
                cout << "Leap year\n";
        } else {
                cout << "Not leap year\n";
        }

        return 0;
}
