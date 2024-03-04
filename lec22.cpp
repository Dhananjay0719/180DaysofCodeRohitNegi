//binary search
#include<iostream>
using namespace std;
void search(int arr[],int n,int e){
   int start=0;
   int end=n-1;
   int count=0;
   while(start<=end){
    int mid=start+end/2;   //gives int overflow so it is written as mid=start+((end-start)/2); adding start and sub start in num
    if(arr[mid]==e){
        cout<<"Element"<<e<<"Found at index:"<<mid<<endl;
        count++;
        break;
    }
    else if(arr[mid]<e){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
   }
   if(count==0){
    cout<<"Element not present in the array"<<endl;
   }
}
int main(){
    int n,e;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the element to search in the array:"<<endl;
    cin>>e;
    search(a,n,e);
    return 0;
}