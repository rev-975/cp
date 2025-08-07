#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() {
	string dna;
	cin >> dna;
	char curr;
	long long count = 0, ans = 0;
	for (int i = 0; i < dna.length(); i++) {
		if (dna[i] != curr) {
			curr = dna[i];
			count = 0;
		}
		if (dna[i] == curr) {count++;}
		ans = max(ans, count);
	}
	cout << ans;
}
