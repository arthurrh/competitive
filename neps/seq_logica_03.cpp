#include <bits/stdc++.h>
using namespace std;

#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define debug(x) cout << x << endl;
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define MAXN 10005
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define pb push_back
#define endl '\n'

typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vii;
typedef vector <vi> matriz;

int main(){
	desync;
	int aux,n;
	vector<int> v;

	cin >> n;
	for(int i =0 ; i < n ; i++){
		cin >> aux;
		v.pb(aux);
	}
	cin >> n;
	sort(v.begin(), v.end());
	for(int i =0;i <n; i++){
		cin >> aux;
		if(binary_search(v.begin(), v.end(), aux))
			cout << "Sim\n";
		else
			cout << "Nao\n";
	}
	return 0;
}