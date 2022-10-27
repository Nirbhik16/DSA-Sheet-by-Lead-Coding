//Q3. Product of Array Except Self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> nums1=nums;
        vector<int> nums2=nums;
        nums1[0]=1;
        nums1[1]=nums[0];
        for(int i=2;i<n;i++){
            nums1[i]=nums1[i-1]*nums[i-1];
        }
        nums2[n-1]=1;
        nums2[n-2]=nums[n-1];
        for(int i=n-3;i>=0;i--){
            nums2[i]=nums2[i+1]*nums[i+1];
        }
        for(int j=0;j<n;j++){
            nums[j]=nums1[j]*nums2[j];
        }
        return nums;
    }
};
