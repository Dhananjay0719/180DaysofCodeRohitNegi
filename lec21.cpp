#include<iostream>
using namespace std;
void sort(int arr[],int n){
   for(int i=1;i<=n-1;i++)
   {
    for(int j=i;j>0;j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
        else{
            break;
        }
    }
   }
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,n);
    for(int i=0;i<n;i++){
    cout<<a[i];
    }
    return 0;
}