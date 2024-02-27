// #include<iostream>
// using namespace std;

// int main()
// {
// int i,j,k,n;
// cin>>n;
// for(i=1;i<=n;i++){
//    for(k=n-i;k>=1;k--){
//     cout<<" ";
//    }
//    for(j=1;j<=2*i-1;j++){
//     cout<<"*";
//    }
//    cout<<endl;
// }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
// int i,j,k,n;
// cin>>n;
// for(i=1;i<=n;i++){
//    for(k=n-i;k>=1;k--){
//     cout<<" ";
//    }
//    for(j=1;j<=i;j++){
//     cout<<j;
//    }
//    for(j=i-1;j>=1;j--){
//     cout<<j;
//    }
//    cout<<endl;
// }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
// int i,j,k,n;
// cin>>n;
// for(i=n;i>=1;i--){
//    for(k=n-i;k>=1;k--){
//     cout<<" ";
//    }
//    for(j=2*i-1;j>=1;j--){
//     cout<<"*";
//    }
//    cout<<endl;
// }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
// int i,j,k,n;
// cin>>n;
// for(i=n;i>=1;i--){
//    for(k=i;k>=1;k--){
//     cout<<"*";
//    }
//    for(j=1;j<=2*n-2*i;j++){
//     cout<<" ";
//    }
//    for(k=i;k>=1;k--){
//     cout<<"*";
//    }
//    cout<<endl;
// }
// for(i=1;i<=n;i++){
//    for(k=1;k<=i;k++){
//     cout<<"*";
//    }
//    for(j=1;j<=2*n-2*i;j++){
//     cout<<" ";
//    }
//    for(k=1;k<=i;k++){
//     cout<<"*";
//    }
//    cout<<endl;
// }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
// int i,j,k,n;
// cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++)
//       cout<<"*";
//     for(k=1;k<=2*n-2*i;k++)
//       cout<<" ";
//     for(j=1;j<=i;j++)
//       cout<<"*";
//     cout<<endl;
//   }
//   for(i=n-1;i>=1;i--){
//     for(j=1;j<=i;j++)
//       cout<<"*";
//     for(k=1;k<=2*n-2*i;k++)
//       cout<<" ";
//     for(j=1;j<=i;j++)
//       cout<<"*";
//     cout<<endl;
//   }
// }

#include<iostream>
using namespace std;

int main()
{
int i,j,k,n;
cin>>n;
   for(i=1;i<=n;i++){
    for(k=1;k<=n-i;k++)
       cout<<" ";
    for(j=1;j<=i;j++)
       cout<<"* ";
    cout<<endl;
   }
   for(i=n;i>=1;i--){
    for(k=1;k<=n-i;k++)
       cout<<" ";
    for(j=1;j<=i;j++)
       cout<<"* ";
    cout<<endl;
   }
}