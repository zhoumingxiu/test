#include <iostream>
#include <iomanip>
using namespace std;
 main()
{
  double num[10];
  cout<<"请输入10个数："<<endl;
  for(int i=0;i<10;i++)
    cin>>num[i];
  double ave=0;
  for(double *p=num;p-num<10;p++)
    ave+=*p;
  ave/=10;
  cout<<"平均值为 "<<setprecision(2)<<setiosflags(ios::fixed)<<ave<<endl;
}