//Q6. Running Sum of 1d Array
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        vector<int> ans1(n);
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+nums[i];
            ans1[k]=ans;
            k++;
        }
        return ans1;
    }
};

//Q7. Find Pivot Index
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0,ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            ans-=nums[i];
            if(ans==left){
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }
};
