//Q4. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=1;
        while(j<n){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
            if(nums[i]!=0){
                i++;
            }
            j++;
        }

    }
};

//Q5. Best Time to Buy and Sell Stock II
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
