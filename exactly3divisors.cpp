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

vector<int> sieve(int n){
    vector<int> v;
    int p[n+1];
    memset(p, 0, sizeof(p));
    for(int i = 2; i*i <= n; i++){
        if(p[i] == 0){
            for(int j = i*i; j <= n; j+=i)
                p[j] = 1;
        }
    }
    for(int i = 2; i <= n; i++)
        if(p[i] == 0)
            v.pb(i);
    return v;
}

int main() {
    //Given an integer n, find out how many numbers from 1 to n have exactly 3 divisors
    //example n = 4, output: 1 as from 1 to 4 only 4 has 3 diviors - 1, 2, and 4
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t--){
        int n;
        cin >> n;
        int count = 0;
        //required numbers are squares of prime numbers and 1
        vector<int> v = sieve(n);
        for(int i = 0; i < v.size(); i++){
            if(v[i]*v[i] <= n)
                count++;
        }
        cout << count << endl;
    }
}
