#include <iostream>
using namespace std;
int num[10]={5,8,15,22,45,49,58,64,99,105};//
int num2[11];//
main()
{
  int a;
  cout<<"Please input a number:";
  cin>>a;
  int *p=num;
  int *p2=num2;
  while(p-num<10)
  {
    if(*p<a)
    {
      *p2=*p;
      p2++;
      p++;
    }
    else
    {
      *p2=a;
      p2++;
      break;
    }
  }
  while(p-num<10)
  {
    *p2=*p;
    p2++;
    p++;
  }
  for(p2=num2;p2-num2<11;p2++)
    cout<<*p2<<" ";
  cout<<endl;
}