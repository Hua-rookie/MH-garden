#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
class BaseString{
 public:
  char a[20];
  char b[20];
  char c[20];
  char d[20];
  BaseString(){}
  void getin(){
   cin.get(a,20);
   cin>>b>>c>>d;
  }
};
class ReString:virtual public BaseString{
    int length;
 public:
 ReString(int length):BaseString(){//新变量要在构造里面写
  length=strlen(a);
 }
 int i;
    void getouta(){
     cout<<"倒序输出：";
     for(i=length-1;i>=0;i--){
      cout<<a[i];
 }
 cout<<endl;
 }
};
class CopyString:virtual public BaseString{
 public:
 CopyString():BaseString(){}
 void getoutb(){
  cout<<"复制输出："<<b<<endl;
 }
};
class CmpString:virtual public BaseString{
 public:
 CmpString(int k):BaseString(){
  k=0;
 }
 int i,m,n;
 void compare(){
  int k=0;
  m=strlen(c);
  n=strlen(d);
  if(m!=n){cout<<"判断结果：两字符串不相等。"<<endl;}
  else{for(i=0;i<m;i++){
       if(c[i]!=d[i]){k++;}
        }
      if(k==0){cout<<"判断结果：两字符串相等。"<<endl;}
      else{cout<<"判断结果：两字符串不相等。"<<endl;}
  }
 }
};
class String:public ReString,public CopyString,public CmpString{
 public:
 String(int length,int k):BaseString(),ReString(length),CopyString(),CmpString(k){}
};
int main(){
 String p(strlen(p.a),0);
 p.getin();
 p.getouta();
 p.getoutb();
 p.compare();
 return 0;
}





























/*class Point
{
 public:
   Point (int val) {x=val;}
   Point & operator ++()
   {
x++;
return *this;
}
 Point operator ++(int)
{
Point old=*this;
++(*this);
return old;
}
int GetX() const {return x;}
 private:
   int x;
};
int main()
{
  Point a(10);
  cout<<(++a).GetX();
  cout<<(a++).GetX();
  return 0;
}*/
