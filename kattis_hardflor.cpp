#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

struct Point {
	int x,y;
};


Point move(Point current, char dir, int dist) {
	switch (dir) {
		case 'N': return {current.x, current.y + dist};
		case 'S': return {current.x, current.y - dist};
		case 'E': return {current.x + dist, current.y};
		case 'W': return {current.x - dist, current.y};
		default: return current;
	}
}

int main() {
	int n;
	cin >> n;
	vector<Point> points;
	Point current = {0,0};
	points.pb(current);

	for (int i = 0; i < n; ++i) {
		string dirstr;
		cin >> dirstr;
		cout << dirstr << "h";
		char dir = dirstr[0];
		int dist = stoi(dirstr.substr(1));
		// int dist = atoi(dirstr[1]);
		current = move(current, dir, dist);
		points.pb(current);
	};

	ll area = 0;
	for (int i = 0; i < n; ++i) {
		area += (ll)points[i].x * points[i+1].y;
		area -= (ll)points[i+1].x * points[i].y;

	};

	area = abs(area)/2;
	printf("THE AREA IS %lld\n", area);
}
