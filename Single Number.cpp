class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // using xor operator
        // basically xor operator returns 0 when both inputs are either 0 or 1
        /* so on applying xor operator on any two same integer then it returns
         zero*/
        int res = 0;
        for(int i = 0; i < nums.size(); i++) {
            res = res ^ nums[i];
        }
        /*so only intger whose occurence is 1 in array will remain in res
        and we will return that*/
        return res;
    }
};