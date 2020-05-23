#include <bits/stdc++.h>
using namespace std;
#define pb push_back  
#define loop(i,n) for(int i = 0; i < n; i++)
#define mp make_pair
#define F first
#define S second
#define asort(a) sort(a,a+n)
#define vsort(v) sort(v.begin(), v.end())
#define remdup(v) v.erase(unique(v.begin(), v.end()), v.end())
#define iter(m) for(auto it = m.begin(); it != m.end(); it++)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

int main() {
    //Given an integer n, find the smallest number which is divisible by each integer from 1 to n
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t--){
        ll n;
        cin >> n;
        //the answer will be lcm of 1 to n
        //use the formula lcm(x,y)*gcd(x,y) = a*b
        ll res = 1;
        for(l i = 2; i <= n; i++)
            res = (res*i)/__gcd(res, i);

        cout << res << endl;
	}
}
