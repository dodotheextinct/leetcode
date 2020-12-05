class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector <int> running_sums;
        int prev_sum = 0;
        for (int i = 0; i < nums.size (); ++i)
        {
            int curr_sum = prev_sum + nums.at(i);
            prev_sum = curr_sum;
            running_sums.push_back (curr_sum);
        }
        return running_sums;
    }
};