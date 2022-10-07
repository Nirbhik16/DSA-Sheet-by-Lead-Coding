//Q1. Two-Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        vector<int> arr1;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            while(j<nums.size()){
                if(nums[i]+nums[j]==target){
                    arr1.push_back(i);
                    arr1.push_back(j);
                    return arr1;
                }
                j++;
            }
        }
        return arr1;
    }
};

//Q2. Best time to buy and sell stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxprofit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minprice)
                minprice = prices[i];
            else if(prices[i] - minprice > maxprofit)
                maxprofit = prices[i] - minprice;
        }
        return maxprofit;
    }
};

//Q3. Plus-One
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
    }
};
