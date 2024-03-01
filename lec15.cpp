// #include<iostream>
// using namespace std;
// void conv(char name){
//    cout<<(char)(name-32);    //cout<<name-'a'+'A';{difference between name and a and added to A to get the capitalized value}
// }
// int main(){
//     char name;
//     cin>>name;
//     if(name<90 || name>122){
//         cout<<"Enter a valid alphabet";
//         return 0;
//     }
//     conv(name);
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int countd(int n){
//     int d=0;
//     while(n){
//         d++;
//         n=n/10;
//     }
//     return d;
// }
// bool isarmstrong(int num,int digits){
//     int temp=num,ans=0,rem;
//     cout<<temp;
//     while(temp>0)
//     {
//         rem=temp%10;
//         ans=ans+(pow(rem,digits));
//         temp=temp/10;
//     }
//     cout<<ans;
//     if(ans==num){
//         cout<<"armstrong";
//         return 1;
//     }
//     else
//     {   
//         cout<<"Not armstong";
//         return 0;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number to check if its armstrong"<<endl;
//     cin>>n;
//     int noofdigits=countd(n);
//     cout<<noofdigits;
//     cout<<isarmstrong(n,noofdigits)<<endl;
// }

