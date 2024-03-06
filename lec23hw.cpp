//count no of occurances of elements in a sorted array
//1 2 4 4 4 4 5 6 for 4 occurances =4
//hint first occ 2 index last occ 5 th index (5-2)+1 is the ans

#include<iostream>
using namespace std;
int main(){
    int n,s,first,last;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    cin>>a[i];

    cin>>s;

    int start=0,end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;

        if(a[mid]==s){
            first=mid;
            end=mid-1;
        }
        else if(a[mid]>s){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    start=0,end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;

        if(a[mid]==s){
            last=mid;
            start=mid+1;
        }
        else if(a[mid]>s){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<last-first+1;
    return 1;
}