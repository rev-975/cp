#include <bits/stdc++.h>
#include <cstdio>
#define ll long long int
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll a;
	string str;
	scanf("%lld", &a);
	while (a != 1) {
		str += to_string(a) + " ";
		if (a % 2 == 0) {
			a = a/2;
		}
		else {
			a = (a*3) + 1;
		}
	}
	str += "1";
	printf("%s \n", str.c_str());
	return 0; 
}

