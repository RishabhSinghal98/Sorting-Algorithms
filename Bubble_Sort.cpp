#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
        
        public:

        void swap(vector<int>&a,int x,int y)
        {
            int temp=a[x];
            a[x]=a[y];
            a[y]=temp;
        }
        void Bubblesort(vector<int>&nums)
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]<nums[i]) swap(nums,i,j);
            
                }
            }
        }
    

};

int main()
{
    Solution obj;
    vector<int> nums={21,32,34,46,51,54,65,76,78,97,01,4,2,7,12};
    obj.Bubblesort(nums);
    for(auto x:nums)
    {
        cout<<x<<" ";
    }
  
    return 0;
}