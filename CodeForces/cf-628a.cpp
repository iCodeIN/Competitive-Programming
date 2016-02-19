#include <iostream> 
#include <cstdio>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <bitset>
#include <numeric>
#include <iterator>
#include <algorithm>
#include <cmath>
#include <chrono>
#include <cassert>

using namespace std;
using ll = long long;
using ld = long double;
using ii = pair<ll, ll>;
using vi = vector<ll>;
using vb = vector<bool>;
using vvi = vector<vi>;
using vii = vector<ii>;
using vvii = vector<vii>;

const int INF = 2000000000;
const ll LLINF = 9000000000000000000;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n, b, p;
	cin >> n >> b >> p;
	
	ll bt = 0LL, pt = n * p;
	while (n > 1) {
		ll d = 1LL;
		while ((d<<1) <= n) d <<= 1;
		bt += (2 * b + 1) * (d >> 1);
		n -= (d >> 1);
	}
	
	cout << bt << ' ' << pt << endl;
	
	return 0;
}
