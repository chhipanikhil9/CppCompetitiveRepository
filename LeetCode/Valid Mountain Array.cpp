// One person climb from left side and go to peak of the mountain and then the right side
class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        int n = a.size();
        if(n<3 or a[0]>=a[1]) return false;
        int i = 1;
        while(i<n-1 and a[i]>a[i-1]){
            i++;
        }
        while(i<n and a[i]<a[i-1]){
            i++;
        }
        return (i==n);
    }
};

// Two person: one climb from left and second climb from right and both reach at the peak of the mountain
class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        int n = a.size();
        if(n<3) return false;
        int i = 0;
        while(i<n-1 and a[i]<a[i+1]){
            i++;
        }
        int j = n-1;
        while(j>=1 and a[j]<a[j-1]){
            j--;
        }
        if(i>0 and j<n-1 and i==j){
            return true;
        }
        return false;
    }
};
