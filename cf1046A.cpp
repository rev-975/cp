#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;  
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool chk1 = (max(a, b) <= 2 * (min(a, b) + 1));
        bool chk2 = (max(c - a, d - b) <= 2 * (min(c - a, d - b) + 1));
	
	if (chk1 && chk2){
			cout << "YES" << endl;
		}
	else {
			cout << "NO" << endl;
		}

    }

    return 0;
}
