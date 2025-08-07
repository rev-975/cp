#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	long long n, num, sum = 0;
	string line;
//	ifstream cin("test.in");
	cin >> n;
	cin.ignore();
	getline(cin, line);
	istringstream iss(line);
	while (iss >> num) {sum += num;};
	cout << (n*(n+1)/2) - sum << endl;
	return 0;	
}
