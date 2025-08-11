#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	cin >> str;
	string result = "";
	int n = str.length();
	for (int i = 0; i < n; ++i) {
		if (str[i] == '<' && !result.empty()) {
			result.pop_back();
		}
		else if (str[i] != '<') {
			result += str[i];			
		}
	}
	cout << result;
	return 0;
}
