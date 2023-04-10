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

        int partition(vector<int>&nums,int start,int end)
        {
            int pivot=nums[start];
            int count=0;
            for(int i=start+1;i<=end;i++)
            {
                
             if(nums[i]<=pivot) count++;
            }
            int idx=start+count;
            swap(nums,start,idx);
            
            int i=start;
            int j=end;
            while(i<idx && j>idx){
            
            while(nums[i]<=pivot) i++;

            while(nums[j]>=pivot) j--;

            if(i<idx && j>idx) 
            { 
                
                swap(nums,i,j);
                i++;j--;
            
             }
            }
            return idx;
        }
        
        void Quicksort(vector<int>&nums,int start,int end)
        {
            if(start>=end) return ;
            int idx;
            idx=partition(nums,start,end);
            Quicksort(nums,start,idx-1);
            Quicksort(nums,idx+1,end);
        }
    

};

int main()
{
    Solution obj;
   vector<int> nums={21,32,34,46,51,54,65,76,78,97};
    int start=0;
    int end=nums.size()-1;
    obj.Quicksort(nums,start,end);
    for(auto x:nums)
    {
        cout<<x<<" ";
    }
  
    return 0;
}