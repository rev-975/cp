#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	ll t;
	cin >> t;
	while (t-- ){
		ll n;
		cin >> n;
		vector<ll> ans;
		ll cur = 10;
		while(cur + 1 <= n) {
			if(n % (cur + 1) == 0) ans.push_back(n/(cur+1));
			cur *= 10;
		}

		sort(ans.begin(), ans.end());
		cout << ans.size() << endl;
		for (auto i: ans) cout << i << " ";
		if(ans.size()) cout << endl;
	}

}
