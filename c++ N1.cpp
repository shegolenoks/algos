#include<bits/stdc++.h>
#include <vector>
#define ll long long
#define pb push_back
#define vec vector
using namespace std;
int main()
{
    int n, item;
    cin >> n >> item;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (item < a[mid]) {
            high = mid - 1;
        }
        else if (item > a[mid]) {
            low = mid + 1;
        }
        else {
            cout << mid;
            return 0;
        }
    }
    cout << "Null";
    return 0;
}