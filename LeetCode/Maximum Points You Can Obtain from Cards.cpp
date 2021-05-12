class Solution {
public:
    int maxScore(vector<int>& cards, int k) {
        int sum = 0;
        for(int i=0;i<k;i++){
            sum += cards[i];
        }
        int ans = sum;
        int j = cards.size()-1;
        for(int i=0;i<k;i++){
            sum -= cards[k-i-1];
            sum += cards[j--];
            ans = max(sum,ans);
        }
        return ans;
    }
};
