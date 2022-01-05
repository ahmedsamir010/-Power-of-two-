//??? ???? ?? ??? ?????? ???? ?? ???? ?? ????
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
#define ll long long
#define ld long double
#define  t   int
#define ahmed ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
using namespace std;
int main()
{
    ahmed;
    ll n;
    cin >> n;
    ld a = log2(n);
    ll b = a;
    ld r = b - a;
    if (r == 0)
        cout << "YES" << endl;
    else if (r < 0)
        cout << "NO" << endl;
    return 0;
}