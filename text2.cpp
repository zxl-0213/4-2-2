class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int val=0;
        for(auto e:nums)
        {
            val^=e;
        }
    size_t i=0;
    for(i;i<32;++i)
    {
        if(val&(1<<i))
        {
            break;
        }
    }  
    int num1=0,num2=0;
    for(auto e:nums)
    {
        if(e&(1<<i))
        {
            num1^=e;
        }
        else
        {
            num2^=e;
        }
    }
    vector<int> v;
    v.push_back(num1);
    v.push_back(num2);
    return v;
    }
};