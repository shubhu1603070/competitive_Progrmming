
/* Shubhulol */

//Header files
#include 			<bits/stdc++.h>
#include 			<ext/pb_ds/assoc_container.hpp>
#include			<ext/pb_ds/tree_policy.hpp>
#include 			<functional>



//STL

// typedef vector<int> vi;

//Macros
#define 			ll long long
#define 			ld long double
#define 			db double
#define				str string
#define             lli long long int
#define 			ull unsigned long long
#define 			f(i,x,n) for(ll int i=x;i<n;i++)
#define 			re(j,x,n) for(ll int j=x;j>=n;j--)
#define 			f1(k,x,n) for(ll int k=x;k<=n;k++)
#define 			mp(x,y) std::make_pair(string(x),int(y))
#define 			pb push_back
#define 			input  file();
#define 			bit(x, i) (x >>(i - 1) & 1ll)
#define 			w() int x; cin>>x; while(x--)
#define 			all(v) (v).begin(),(v).end()
#define 			MAX 1000001
#define 			nl '\n';
#define  			c1(x) cin>>x;
#define				c2(x,y) cin>>x>>y;
#define 			c3(x,y,z) cin>>x>>y>>z;
#define 			c4(a,b,c,d) cin>>a>>b>>c>>d;
#define 			o1(x) cout<<x<<'\n';
#define 			o2(x,y) cout<<x<<" "<<y<<'\n';
#define 			o3(x,y,z) cout<<x<<" "<<y<<" "<<z<<'\n';
#define 			o4(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<'\n';

//Variables
const ll MOD = 1e9 + 7;
const ll maximum = 1000000;
int inf = 0x3f3f3f3f;
ll infl = 0x3f3f3f3f3f3f3f3fLL;
ld infd = 1.0 / 0.0;

//inclusion
using namespace __gnu_pbds;
using namespace std;

//Unordered ds
typedef tree<pair<ll int, ll int>, null_type, less<pair<ll int, ll int> >, rb_tree_tag, tree_order_statistics_node_update>
new_data_set;

//Input file
void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}


int solve() {


	ll n = 0, x = 0, y = 0;
	cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	ll diff = MAX;
	for (int i = 1; i < n; i++) {
		if (abs(v[i] - v[i - 1]) < diff) {
			diff = abs(v[i] - v[i - 1]);
			x = i + 1;
			y = i;
		}
	}


	if (abs(v[n - 1] - v[0]) < diff) {
		x = n;
		y = 1;
		diff = abs(v[n - 1] - v[0]);
	}

	cout << x << " " << y;

	return 0;
}



int main()
{
	input
	solve();
	cout << endl;
	return 0;
}