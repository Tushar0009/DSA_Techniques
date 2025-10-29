#include <bits/stdc++.h>
#define endl '\n';
using ll = long long;
using lli = long long int;
using ld = long double;
using namespace std;
#define F first
#define int long long
#define S second
#define X real()
#define Y imag()
#define REP(i , e) for(int i=0;i<(e);i++)
#define REP1(i , e) for(int i=1;i<(e);i++)
const int mod = 1000000007;
const int N = 3e5 + 999;


int pow_func(int num , int n) {
	num %= mod;
	int ans = 1;
	while(n){
		if(n & 1){
			ans = (ans * num)%mod;
		}
		num = (num * num)%mod;
		n = n>>1;
	}
	return ans%mod;
}
inline int mul(int a, int b){
	return (a%mod)*(b%mod)%mod;
}
int inverse(int x) {
	return pow_func(x , mod-2);
}
int gcd(int a , int b) {
	if(b==0)return a;
	return gcd(b , a%b);
}

const int INF = 2100000000;
int n , m , k;

void solve() {

}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
}
