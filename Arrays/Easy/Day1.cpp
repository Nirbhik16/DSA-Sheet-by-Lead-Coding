// Question 1. LeetCode Question No. 1
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



// Question 2. LeetCode Question No. 121
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



// Question 3. LeetCode Question No. 88
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



// Question 4. LeetCode Question No. 283
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
