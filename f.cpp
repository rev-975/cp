#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	cin >> str;
	int n = str.length();
	if (str[0] == '<') {str[0] = '\0';}
	for (int i = 0; i <= n; ++i) {
		if (str[i] == '<') {
			cout << i;
			str[i] = '\0';
			cout << str << '\n';
			str[i-1] = '\0';
			cout << str << '\n';
			n -= 1;
			n -= 1;
		}
	}
	cout << str;
	return 0;
}
