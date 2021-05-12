class Solution {
public:
    void sortColors(vector<int>& nums) {
//         In two pass O(2n)
        
//         int z=0,o=0,t=0;
        
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0) z++;
//             else if(nums[i]==1) o++;
//             else t++;
//         }
        
//         int i=0;
//         for(;i<z;i++){
//             nums[i]=0;
//         }
//         for(;i<z+o;i++){
//             nums[i]=1;
//         }
//         for(;i<z+o+t;i++){
//             nums[i]=2;
//         }
        
        
        // In one pass O(n): Dutch national flag problem
        int n= nums.size();
        int l = 0,m=0,r=n-1;
        while(m<=r){
            if(nums[m]==0){
                swap(nums[m],nums[l]);
                m++,l++;
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[m],nums[r]);
                r--;
            }
        }
    }
};
