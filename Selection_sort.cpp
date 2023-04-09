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

        vector<int> SelectionSort(vector<int>&nums)
        {
            int i,j,swaps=0,comparison=0,min_idx;
            for(j=0;j<nums.size()-1;j++)
            {
               min_idx=j;

               for(i=j+1;i<nums.size();i++)
            {
                comparison++;
                if(nums[min_idx]>nums[i])
                {
                   min_idx=i;
                }
            }
              swaps++;
                swap(nums,min_idx,j);

            }
            return{comparison,swaps};
         
        }
    

};

int main()
{
    Solution obj;
    vector<int> nums1={54,65,34,76,78,97,46,32,51,21};
    vector<int> nums2={-23,65,-31,76,46,89,45,32};
    vector<int> nums3={3,7,1,9,4,0};
    
   vector<int> ans=obj.SelectionSort(nums1);
 
    for(auto x:nums1)
    {
        cout<<x<<" ";

      
    }
    cout<<endl;
  
        cout<<"Comparisons Are "<<ans[0]<<" "<<endl;
        cout<<"Swaps Are "<<ans[1]<<" "<<endl;
       
    return 0;
}