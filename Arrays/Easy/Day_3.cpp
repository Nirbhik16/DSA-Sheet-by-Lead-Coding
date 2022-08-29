// Question 7. LeetCode Question No. 724
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



// Question 8. LeetCode Question No. 169
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};



// Question 9. LeetCode Question No. 509
class Solution {
public:
    int fib(int n) {
        int a=0,b=1,c=0;
        if(n==1){
            return 1;
        }
        while(n>1){
            c=a+b;
            a=b;
            b=c;
            n--;
        }
        return c;
    }
};
