// Author : |\| | |< |-| | |_	( |-| |-| | |> /\ //

#include<bits/stdc++.h>
#define fastio 					ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll 						long long
#define vi  					vector<int>
#define vvi 					vector<vi>
#define vl						vector<ll>
#define vvl 					vector<vl>
#define all(x)  				(x).begin(), (x).end()
#define pb 						push_back
#define ff 						first
#define ss 						second//typedef second ss;
#define unmap  					unordered_map<int,int>
#define	unset					unordered_set<int>
#define maxheap  				priority_queue<int>
#define minheap  				priority_queue<int, vi, greater<int>>
#define foton(i,n) 				for(int i=0;i<n;i++)
#define	faton(i,a,n)			for(int i=a;i<=n;i++)
#define endl 					"\n"
#define isort(a) 				sort(all(a))
#define dsort(a)				sort(all(a), greater<int>())
const ll mod = (ll)1e9 + 7;
const int inf = (int)1e6 + 7;
using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt","w",stderr);
#endif

	fastio;
	int n;cin>>n;
	vi a(n);
	foton(i,n){
		cin>>a[i];
	}
	sort(all(a));
	int k;cin>>k;
	while(k--){
		int x;cin>>x;
		int t = (upper_bound(all(a),x)-a.begin());
		cout<<t<<endl;
	}
	return 0;
}
