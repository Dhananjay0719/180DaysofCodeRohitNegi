class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=nums[0],start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]>=nums[0]){
                start=mid+1;
            }
            else{
                ans=nums[mid];
                end=mid-1;
            }
        }
        return ans;
    }
};

//
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // 1 2 4 6 10 8 5 mountain array so first inc then dec
        int start=0,end=arr.size()-1;
        while(start<=end){
            //int mid=start+(end-start)/2; throws memory loc error when mid becomes 1st elem 1 6 3 2 1 testcase
            int mid=end+(start-end)/2;//will work because mid will never go to last elem so no comparison with mid+1
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {return mid;}
            else if(arr[mid]>arr[mid-1]){
                start=mid+1;
            }
            else if(arr[mid]>arr[mid+1]){
                end=mid-1;
            }
            else{
                continue;
            }
        }
        return -1;
    }
};
