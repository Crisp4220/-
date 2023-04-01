#生成树

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 2e5 + 7;
struct edge {
	int v, u, cost;
}e[N];

bool cmp(edge a, edge b) {
	return a.cost < b.cost;
} 
int father[N] ,  n , m;
int findFather(int x) {
	int a = x;
	while (x != father[x])x = father[x];
	while (a != x) {
		int z = a;
		a = father[a];
		father[z] = x;
	}
	return x;
}
int kruskal() {
	int cnt = 0, res = 0;
	for (int i = 1; i <= m; i++)father[i] = i;
	sort(e + 1, e + 1 + m, cmp);
	for (int i = 1; i <= m; i++) {
		int fu = findFather(e[i].u);
		int fv = findFather(e[i].v);
		if (fu != fv) {
			res += e[i].cost;
			cnt++;
			father[fu] = fv;
			if (cnt == n - 1) break;
		}
	}
	if (cnt != n - 1) return -1;
	return res;
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++)cin >> e[i].v >> e[i].u >> e[i].cost;
	int res = kruskal();
	for (int i = 1; i <= m; i++)cout << e[i].v << e[i].u << e[i].cost;
	if (res == -1)cout << "orz";
	else cout << res;
	return 0;
}
