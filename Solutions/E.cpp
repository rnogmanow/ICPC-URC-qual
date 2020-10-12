/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */


#include <iostream>
    #include <math.h>
     
    using namespace std;
    int main () {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            a[i] = i+1;
        cout << 2 << endl;
        for (int i=n-1;i>0;i--) {
            cout << a[i] << " " << a[i - 1] << endl;
            a[i - 1] = ((a[i] + a[i - 1]+1) / 2);
        }
    }
