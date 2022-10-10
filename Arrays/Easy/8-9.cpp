//Q8. Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};

//Q9. Fibonacci Number
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
