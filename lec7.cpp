// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=i;j++)
//     {
//      cout<<"*"<<" ";
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
//     for(j=1;j<=i;j++)
//     {
//      cout<<j<<" ";
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
//     for(j=i;j>=1;j--)
//     {
//      cout<<j<<" ";
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
//     char name='a'+(i-1);
//     for(j=1;j<=i;j++)
//     {
//      cout<<name<<" ";
//     }
//     cout<<endl;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j,count=5;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=count;j++)
//     {
//      cout<<"*"<<" ";
//     }
//     cout<<endl;
//     count--;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=(5-(i-1));j++)
//     {
//      cout<<"*"<<" ";
//     }
//     cout<<endl;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j,count=5;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=count;j++)
//     {
//      cout<<j<<" ";
//     }
//     cout<<endl;
//     count--;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=(5-(i-1));j++)
//     {
//      cout<<j<<" ";
//     }
//     cout<<endl;
//   }
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i,j;
//   for(i=5;i>=1;i--)
//   {
//     for(j=1;j<=i;j++)
//     {
//      cout<<j<<" ";
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
//     int count=5;
//     for(j=1;j<=i;j++)
//     {
//      cout<<count--<<" ";
//     }
//     cout<<endl;
//   }
// };

#include<iostream>
using namespace std;
int main()
{
  int i,j;
  for(i=1;i<=5;i++){
    for(j=5;j>=(5-(i-1));j--)
    {
     cout<<j<<" ";
    }
    cout<<endl;
  }
};


