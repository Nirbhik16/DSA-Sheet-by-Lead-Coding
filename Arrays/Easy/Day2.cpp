// Question 5. LeetCode Question No. 122
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1]>prices[i]){
                profit+=prices[i+1]-prices[i];
            }
        }
        return profit;
    }
};



// Question 6. LeetCode Question No. 1480
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
