// #include<iostream>
// using namespace std;
// int main()
// {
//    int n,pow,ans=1;
//    cout<<"Enter the number"<<endl;
//    cin>>n;
//    cout<<"Enter the power"<<endl;
//    cin>>pow;
//    for(int i=1;i<=pow;i++)
//    {
//     ans=ans*n;
//    }
//    cout<<n<<" power "<<pow<<"="<<ans<<endl;
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n,ans=0;
//    cout<<"Enter the number"<<endl;
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//     ans=ans+i;
//    }
//    cout<<"Sum of first "<<n<<" natural numbers ="<<ans<<endl;
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n,ans=0;
//    cout<<"Enter the number"<<endl;
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//     ans=ans+(i*i);
//    }
//    cout<<"Sum of squares of first "<<n<<" natural numbers ="<<ans<<endl;
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//    long long int n,ans=1;
//    cout<<"Enter the number"<<endl;
//    cin>>n;
//    for(int i=1;i<=n;i++)//i=n;i>1;i--
//    {
//     ans=ans*i;
//    }
//    cout<<"Factorial of "<<n<<" ="<<ans<<endl;
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"Enter the number"<<endl;
//    cin>>n;
//    if(n<2){
//     cout<<"Not Prime";
//     return 0;
//    }
//    for(int i=2;i<n;i++)
//    {
//     if(n%i==0)
//     {
//         cout<<"Not Prime";
//         return 0;
//     }
//    }
//    cout<<"Prime Number";
// };

#include<iostream>
using namespace std;
int main()
{
   int n,ans=0;
   cout<<"Enter the number of terms of the fibonacci series"<<endl;
   cin>>n;
   if(n<1){
    cout<<"Please enter valid number of terms";
    return 0;
   }
   else if(n==1){
    cout<<0;
    return 0;
   }
   else if(n==2){
    cout<<0<<1<<endl;
   }
   else{
    n=n-2;
    int first=0;
    int second=1;
    int sum;
    cout<<first<<" "<<second<<" ";
    for(int i=1;i<=n;i++){
        sum=first+second;
        cout<<sum<<" ";
        first=second;
        second=sum;
    }
   }
};
