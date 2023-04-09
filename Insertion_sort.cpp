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

        int InsertionSort(vector<int>&nums)
        {
            int i,j,swaps=0,comparison=0;
            for(i=1;i<nums.size();i++)
            {
                  
                int key=nums[i];
                j=i-1;

                while(j>=0 && key<nums[j])
                {
                 
                    nums[j+1]=nums[j];
                    comparison++;
                    j--;
                } 
                nums[j+1]=key;
            
            }
            return{comparison};
         
        }
    

};

int main()
{
    Solution obj;
    vector<int> nums2={-23,65,-31,76,46,89,45,32};
    int ans=obj.InsertionSort(nums2);
    for(auto x:nums2)
    {
        cout<<x<<" ";

      
    }
    cout<<endl;
    
  cout<<"Comparisons Are "<<ans<<" "<<endl;
        
    return 0;
}