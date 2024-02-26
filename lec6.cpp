// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//         cout<<i;
//     }
//     cout<<endl;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//         cout<<j;
//     }
//     cout<<endl;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=5;j>=1;j--){
//         cout<<j;
//     }
//     cout<<endl;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//         cout<<j*j<<" ";
//     }
//     cout<<endl;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j;
//   char flag='a';
//   for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//         cout<<flag;    //flag='a'+(i-1);
//     }
//     cout<<endl;
//     flag=flag+1;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++){
//     char flag='a';
//     for(j=1;j<=5;j++)
//     {
//         cout<<flag;    //flag='a'+(j-1);
//         flag=flag+1;
//     }
//     cout<<endl;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++)
//     {
//     char flag='a'+(j-1);
//     cout<<flag;
//     }
//     cout<<endl;
//   }
// };

#include<iostream>
using namespace std;
int main()
{
  int i,j,flag=1;
  for(i=1;i<=5;i++){
    for(j=1;j<=5;j++)
    {
        cout<<flag++<<" ";  
    }
    cout<<endl;
  }
};