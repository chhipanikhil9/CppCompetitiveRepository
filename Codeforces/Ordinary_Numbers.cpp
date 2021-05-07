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
int dig(ll n){
	int cnt = 0;
	while(n>0){
		cnt++;
		n/=10;
	}
	return cnt;
}
int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt","w",stderr);
#endif

	fastio;
	int t; cin >> t;
	while (t--) {
		ll n;cin>>n;
		if(n<=9){
			cout<<n<<endl;
			continue;
		}
		int sum = 0;
		if(dig(n)==2){
			sum = 9;
			ll temp = 11;
			while(temp <= n){
				sum++;
				temp += 11;
			}
		}
		else if(dig(n)==3){
			sum = 9*2;
			ll temp = 111;
			while(temp <= n){
				sum++;
				temp += 111;
			}
		}
		else if(dig(n)==4){
			sum = 9*3;
			ll temp = 1111;
			while(temp <= n){
				sum++;
				temp += 1111;
			}
		}
		else if(dig(n)==5){
			sum = 9*4;
			ll temp = 11111;
			while(temp <= n){
				sum++;
				temp += 11111;
			}
		}
		else if(dig(n)==6){
			sum = 9*5;
			ll temp = 111111;
			while(temp <= n){
				sum++;
				temp += 111111;
			}
		}
		else if(dig(n)==7){
			sum = 9*6;
			ll temp = 1111111;
			while(temp <= n){
				sum++;
				temp += 1111111;
			}
		}
		else if(dig(n)==8){
			sum = 9*7;
			ll temp = 11111111;
			while(temp <= n){
				sum++;
				temp += 11111111;
			}
		}
		else if(dig(n)==9){
			sum = 9*8;
			ll temp = 111111111;
			while(temp <= n){
				sum++;
				temp += 111111111;
			}
		}
		else{
			sum = 9*9;
		}
		cout<<sum<<endl;
	}
	return 0;
}
