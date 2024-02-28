// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number you wanna convert into binary"<<endl;
//     cin>>n;
//     int flag=n;
//     int ans=0;
//     int rem,mul=1;
//     while(flag>0)
//     {   
//         rem=flag%2;
//         ans=ans+(rem*mul);
//         flag=flag/2;
//         mul=mul*10;
//     }
//     cout<<ans;
// }

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number you wanna convert into decimal"<<endl;
    cin>>n;
    int ans=0;
    int rem,mul=1;
    while(n>0)
    {   
        rem=n%10;
        if(rem!=1 || rem!=0){
            cout<<"Invalid Binary Number";
            return 0;
        }
        ans=ans+(rem*mul);
        n=n/10;
        mul=mul*2;
    }
    cout<<ans;
}

