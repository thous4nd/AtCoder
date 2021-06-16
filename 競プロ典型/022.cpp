#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using G = vector<vector<int>>;
const int MOD = 1e9+7;
const int dx[4] = { 1, 0, -1, 0};
const int dy[4] = { 0, 1, 0, -1};

template<class T> void chmax(T& a, T b) {
    if(a < b) {
        a = b;
    }
}
	
ll modPow(ll n, ll p, ll m){
    if (p == 0) return 1;
    if (p % 2 == 1) return (n * modPow(n, p - 1, m)) % m;
    ll t = modPow(n, p / 2, m);
    return (t * t) % m;
}

ll my_gcd(ll x, ll y){
    if(x < y) swap(x, y);
    if(x%y == 0){
        return y;
    } else{
        return my_gcd(y, x%y);
    }
}

int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll g = my_gcd(a, b);
    g = my_gcd(g, c);
    ll ans = a/g-1 + b/g-1 + c/g-1;
    cout << ans << endl;
	return 0;
}

// g++ D.cpp -std=c++11
