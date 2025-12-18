// 3774. Absolute Difference Between Maximum and Minimum K Elements
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        // if(k<=1) return 0;
        sort(nums.begin(),nums.end());
        for(int i : nums){
            cout << i << " ";
        }
        cout << endl;
        
        int maxSum=0,minSum=0;
        for(int i=0;i<k;i++){
            minSum+=nums[i];
        }
        
        int j=nums.size()-1;
        while(k>=1){
            maxSum+=nums[j--];
            k--;
        }
        cout << maxSum << " ";
        return abs(maxSum-minSum);
    }
};