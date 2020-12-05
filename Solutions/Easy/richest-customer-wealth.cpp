class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int max_value = -1;
        for (auto a : accounts)
        {
            vector <int> val_vec = a;
            int total_value = 0;
            for (auto v : val_vec) 
            {
                total_value += v;
            }
            if (total_value > max_value)
            {
                max_value = total_value;
            }
        }
        return max_value;
    }
};