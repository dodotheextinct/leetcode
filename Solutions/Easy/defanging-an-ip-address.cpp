class Solution {
public:
    string defangIPaddr(string address) 
    {
        string defanged_ip;
        for (auto ic : address)
        {
            if (ic == '.')
            {
                defanged_ip += "[.]";
            }
            else
            {
                defanged_ip += ic;
            }
        }
        return defanged_ip;
    }
};