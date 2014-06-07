#include <iostream>
using namespace std;
void newcopy(char *news,char *old)//new
{
  while(*old!='\0')
  {
    if('a'<=*old&&'z'>=*old)
    {
      old++;
      continue;
    }
    *news=*old;
    news++;
    old++;
  }
  *news='\0';
}
main()
{
  char old[100];
  char news[100];
  cout<<"Please input a string:";
  cin>>old;
  newcopy(news,old);
  cout<<news<<endl;
}