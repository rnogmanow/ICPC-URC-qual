/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */



#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    unsigned long long sum = 0LL;
    cin >> n >> k;
    unsigned long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<>());
    if ((k > n) || (k == n)) {
        for (int i = 0; i < n; i++)
            sum += a[i];
        cout << sum;
    } else if (n - 1 == k) {
        for (int i = 0; i < n; i++)
            sum += a[i];
        cout << sum;
    } else {
        for (int i = 0; i <= k; i++)
            sum += a[i];
        cout << sum;
    }

}
