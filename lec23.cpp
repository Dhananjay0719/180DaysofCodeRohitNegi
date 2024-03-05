//leet 35
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=nums.size();
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]==target){
                index=mid;
                break;
            }
            else{
                index=mid;
                end=mid-1;
            }
        }
        return index;
    }
};

//leet 34
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,first=-1,last=-1;
        while(start<=end){
          int mid=start+(end-start)/2;
          if(nums[mid]==target){
              first=mid;
              end=mid-1;
          }
          else if(nums[mid]<target){
              start=mid+1;
          }
          else
          {end=mid-1;}
        }
        start=0,end=nums.size()-1;
        while(start<=end){
          int mid=start+(end-start)/2;
          if(nums[mid]==target){
              last=mid;
              start=mid+1;
          }
          else if(nums[mid]<target){
              start=mid+1;
          }
          else
          {end=mid-1;}
        }
        return {first,last};
    }
};

//leet 69
class Solution {
public:
    int mySqrt(int x) {
        if(x<2)//bcoz in the below code divide by 0 may throw error
        return x;
        int start=0,end=x;
        int sqrt;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid==x/mid){//because mid*mid may result in integer overflow
                return mid;
            }
            else if(mid<x/mid){
                start=mid+1;
                sqrt=mid;
            }
            else{
                end=mid-1;
            }
        }
        return sqrt;
    }
};