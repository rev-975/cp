#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// d means end v means beginning

#define LANDSCAPE ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
	LANDSCAPE
	string a, b, result, order;
	ll a_n, b_n;
	cin >> a_n;
	cin >> a;
	cin >> b_n;
	cin >> b;
	cin >> order;
	result += a;
	for (ll i = 0; i < b_n; i++) {
		if (order[i] == 'D'){
			result += b[i];
		}
		else {
			result = b[i] + result;
		}
	}
	
	cout << result << endl;

}
