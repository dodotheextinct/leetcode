class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector <int> shuffled_vec;
        int x_index = 0;
        int y_index = 0;
        int half_size = nums.size () / 2;
        for (int i = 0; i < half_size; ++i)
        {
            x_index = i;
            y_index = half_size + i;
            shuffled_vec.push_back (nums.at (x_index));
            shuffled_vec.push_back (nums.at (y_index));
        }
        return shuffled_vec;
    }
};