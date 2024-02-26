// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j,k;
//   for(i=1;i<=5;i++){
//     for(k=i+1;k<=5;k++){
//         cout<<" ";
//     }
//     for(j=1;j<=i;j++)
//     {
//      cout<<"*";
//     }
//     cout<<endl;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j,k,n;
//   cin>>n;
//   for(i=1;i<=n;i++){
//     // for(k=i+1;k<=n;k++){
//     //     cout<<" ";
//     // }
//     for(k=n-i;k>=1;k--){
//         cout<<" ";
//     }
//     for(j=1;j<=i;j++)
//     {
//      cout<<"*";
//     }
//     cout<<endl;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j,k,n;
//   cin>>n;
//   for(i=1;i<=n;i++){
//     // for(k=i+1;k<=n;k++){
//     //     cout<<" ";
//     // }
//     for(k=n-i;k>=1;k--){
//         cout<<" ";
//     }
//     for(j=1;j<=i;j++)
//     {
//      cout<<i;
//     }
//     cout<<endl;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j,k,n;
//   cin>>n;
//   for(i=1;i<=n;i++){
//     // for(k=i+1;k<=n;k++){
//     //     cout<<" ";
//     // }
//     for(k=n-i;k>=1;k--){
//         cout<<" ";
//     }
//     for(j=0;j<i;j++)
//     {
//      char flag='A'+j;
//      cout<<flag;
//     }
//     cout<<endl;
//   }
// };


#include<iostream>
using namespace std;
int main()
{
  int i,j,k,n;
  cin>>n;
  for(i=1;i<=n;i++){
    // for(k=i+1;k<=n;k++){
    //     cout<<" ";
    // }
    for(k=n-i;k>=1;k--){
        cout<<" ";
    }
    for(j=i;j>=1;j--)
    {
     cout<<j;
    }
    cout<<endl;
  }
};