//gfg minimum number of pages //painter partition
class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N)
        return -1;
        
        int start=0,end=0,mid,ans;
        for(int i=0;i<N;i++)
        {
            start=max(start,A[i]);
            end+=A[i];
        }
        while(start<=end){
            mid=start+(end-start)/2;
            int pages=0,count=1;
            for(int i=0;i<N;i++){
                pages+=A[i];
                if(pages>mid){
                    count=count+1;
                    pages=A[i];
                }
            }
            if(count<=M){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};

//painter partition 2
class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
      long long start=0,end=0,mid,ans;
      for(int i=0;i<n;i++){
          if(start<arr[i])
          {start=arr[i];}
          end+=arr[i];
      }
      while(start<=end){
          mid=start+(end-start)/2;
          
          long long len=0,paintno=1;
          for(int i=0;i<n;i++){
            len+=arr[i];
            if(len>mid){
                paintno+=1;
                len=arr[i];
            }
          }
            if(paintno<=k){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
          }
      return ans;
    }
};
