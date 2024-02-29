//function of prime number
// #include<iostream>
// using namespace std;
// bool Prime(int n){
//      if(n<2)
//      {return 0;}
//      for(int i=2;i<n;i++)
//      {
//         if(n%i==0)
//         {return 0;}
//      }
//      return 1;
//     }
// void fun(){
//     cout<<"learning functions in c++";
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<Prime(n);
//     fun();
// }

//Pass by value vs Pass by Reference
//By Value
// #include<iostream>
// using namespace std;
// void Prime(int n){
//       n++;
// }
// int main(){
//     int n;
//     cin>>n;
//     Prime(n);
//     cout<<n;   //prints 3 rather than 4 but we wanted increment
// } 

// #include<iostream>
// using namespace std;
// void Prime(int &n){
//       n++;
// }
// int main(){
//     int n;
//     cin>>n;
//     Prime(n);
//     cout<<n;   //prints 3 rather than 4 but we wanted increment
// } 

#include<iostream>
using namespace std;
void swap(int &n,int &m){
      int temp=n;
      n=m;
      m=temp;
}
void swap(float &n,float &m){  //function overloading
      float temp=n;
      n=m;
      m=temp;
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    swap(n,m);
    cout<<n<<" "<<m;   
} 





