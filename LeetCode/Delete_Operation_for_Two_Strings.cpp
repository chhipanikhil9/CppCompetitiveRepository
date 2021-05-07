class Solution {
public:
    vector<vector<int>> dp;
    int help(string w1,string w2,int i,int j){
        if(i==w1.size() and j==w2.size())
            return 0;
        if(i==w1.size() or j==w2.size())
            return max(w2.size()-j,w1.size()-i);
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(w1[i]==w2[j])
            return help(w1,w2,i+1,j+1);
        return dp[i][j] = 1+min(help(w1,w2,i+1,j),help(w1,w2,i,j+1));
    }
    
    int minDistance(string word1, string word2) {
        dp.resize(word1.size()+1,vector<int>(word2.size()+1,-1));
        return help(word1,word2,0,0);
    }
};
