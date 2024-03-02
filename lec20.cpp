//bubble sort
//this bubble sort will give o n2 even in the best case so we need to modify it 
// #include<iostream>
// using namespace std;
// void bubblesort(int a[],int n){
//     for(int i=n-2;i>=0;i--){
//         for(int j=0;j<=i;j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j],a[j+1]);
//             }
//         }
//     }
// }
// int main(){
//   int n;
//   cin>>n;
//   int a[1000];
//   for(int i=0;i<n;i++)
//   cin>>a[i];
//   bubblesort(a,n);
//   for(int i=0;i<n;i++)
//   cout<<a[i];
// }


//modified bubble sort
// #include<iostream>
// using namespace std;
// void bubblesort(int a[],int n){
//     for(int i=n-2;i>=0;i--){
//         bool swapped=0;
//         for(int j=0;j<=i;j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j],a[j+1]);
//                 swapped=1;
//             }
//         }
//         if(swapped==0){
//             break;
//         }
//     }
// }
// int main(){
//   int n;
//   cin>>n;
//   int a[1000];
//   for(int i=0;i<n;i++)
//   cin>>a[i];
//   bubblesort(a,n);
//   for(int i=0;i<n;i++)
//   cout<<a[i];
// }

//bubble sort from last element 
#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
    for(int i=0;i<=n-2;i++){
        for(int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
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
  bubblesort(a,n);
  
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}