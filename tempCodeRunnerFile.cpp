#include<iostream>
using namespace std;
int main()
{
   string a,b;
   getline(cin,a);
   getline(cin,b);
   int valuea=0;
   int valueb=0;
   int length=0;
    for(int i=0;i<a.length();i++){
      if(a[i]>='A' && a[i]<='Z'){
        a[i]+=32;
      }
    }
    for(int i=0;i<b.length();i++){
      if(b[i]>='A' && b[i]<='Z'){
        b[i]+=32;
      }
    }
    for(int i=0;i<a.length();i++){
       if(a[i]!=b[i]){
        break;
       }
       else{
        length++;
       }
    }
    
    for(int i=0;i<a.length();i++){
        valuea += (int)a[i];
    }
    for(int i=0;i<b.length();i++){
        valueb += (int)b[i];
    }
    if(length==a.length()){cout<<0<<endl;}
    if(valuea>valueb){cout<<1<<endl;}
    else if(valuea<valueb){cout<<-1<<endl;}
   
 return 0;
}