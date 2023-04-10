#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
        
        public:

        void count_sort(vector<int>&nums)
        {
            int max=nums[0];
            int j=0;
            int m=0;
            for(int k=0;k<nums.size();k++){

                if(max<nums[k]) max=nums[k];
            }
              vector<int> auxilary(max+1,0);
              for(int i=0;i<nums.size();i++)
              {
                auxilary[nums[i]]++;
              }
              while(j<=max)
              {
                if(auxilary[j]>0)
                {
                    nums[m]=j;
                    auxilary[j]--;
                    m++;
                }
                else{
                    j++;
                }
              }

        }
};

int main()
{
    Solution obj;
   vector<int> nums={23,56,54,05,44,14,65,34,75,24};
   obj.count_sort(nums);
   for(auto x:nums)
   {
    cout<<x<<" ";
   }

   

   

    
    return 0;
}