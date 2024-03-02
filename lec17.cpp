// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[1000];
//     a[0]=0;
//     a[1]=1;
//     for(int i=2;i<n;i++)
//     {a[i]=a[i-1]+a[i-2];}

//     cout<<a[n-1];
//     return 0;
// }

//rotating an array by 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n,temp;
//     cin>>n;
//     int a[1000];
//     cout<<"Enter the array elements"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     temp=a[n-1];
//     //rotation logic take a temp and copy the last no and start rotating from last element
//     for(int i=n-1;i>=1;i--){
//         a[i]=a[i-1];
//     }
//     a[0]=temp;
//     cout<<"Array after 1 rotation:"<<endl;
//     for(int i=0;i<n;i++)
//     cout<<a[i];
// }