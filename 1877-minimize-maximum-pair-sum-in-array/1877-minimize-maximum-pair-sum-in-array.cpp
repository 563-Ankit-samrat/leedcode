class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(begin(nums),end(nums));

        int n = nums.size();
        int i = 0;
        int j = n-1;
        int result = 0;

        while(i<j){
        int sum = nums[i] + nums[j];
           i++;
           j--;
        result = max(result,sum);

        }
        return result;
    }
};