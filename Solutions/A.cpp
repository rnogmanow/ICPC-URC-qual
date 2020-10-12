#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int a,b,c,n;
    cin >> n >> a >> b >> c;
    int ka, kb, kc;
    ka = n/(a+b+c);
    n%=(a+b+c);
    kb= ka;
    kc = ka;
    if (a<=n){
        ka++;
        n-=a;}
    if (b<=n){
        kb++;
        n-=b;}
    if (c<=n){
            kc++;
            n-=c;}

    cout << ka+kb+kc;
}
