//selection sort
#include<iostream>
using namespace std;

void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
      int index=i;
      for(int j=i+1;j<n;j++){
        if(arr[j]<arr[index])
        index=j;
      }
      swap(arr[index],arr[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sort logic
    sort(a,n);
    for(int i=0;i<n;i++)
    {cout<<a[i]<<" ";}
}