// Author : |\| | |< |-| | |_    ( |-| |-| | |> /\ //

#include<bits/stdc++.h>
#define fastio                     ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll                         long long
#define vi                      vector<int>
#define vvi                     vector<vi>
#define vl                        vector<ll>
#define vvl                     vector<vl>
#define all(x)                  (x).begin(), (x).end()
#define pb                         push_back
#define ff                         first
#define ss                         second//typedef second ss;
#define unmap                      unordered_map<int,int>
#define    unset                    unordered_set<int>
#define maxheap                  priority_queue<int>
#define minheap                  priority_queue<int, vi, greater<int>>
#define foton(i,n)                 for(int i=0;i<n;i++)
#define    faton(i,a,n)            for(int i=a;i<=n;i++)
#define endl                     "\n"
#define isort(a)                 sort(all(a))
#define dsort(a)                sort(all(a), greater<int>())
const ll mod = (ll)1e9 + 7;
const int inf = (int)1e6 + 7;
using namespace std;
int n,m,c;

void dfs(vector<string> &a,int i,int j,vector<vector<bool>> &vis){
    if(i<0 or i>=n or j<0 or j>=m or vis[i][j] or a[i][j]=='0'){
        return ;
    }

    c++;
    vis[i][j] = 1;

    dfs(a,i+1,j,vis);
    dfs(a,i,j+1,vis);
    dfs(a,i-1,j,vis);
    dfs(a,i,j-1,vis);
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
        cin>>n>>m;
        vector<string> a(n);
        foton(i,n){
            cin>>a[i];
        }
        vector<int> component;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        foton(i,n){
            foton(j,m){
                if(!vis[i][j]){
                    c = 0;
                    dfs(a,i,j,vis);
                    component.pb(c);
                }
            }
        }
        dsort(component);
        int sum = 0;
        for(int i=1;i<component.size();i+=2){
            sum += component[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
