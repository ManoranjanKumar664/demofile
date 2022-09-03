#include<iosteam.h>
#include<conio.h>
void codetowritename();
void oddoreven();
void main()
{
 clrscr();
 int a, b, c;
cout<<"enter the value of a and b";
cin>>a>>b;
c=a+b;
cout<<"sum="<<c;
 cout<<"hello world";
 codetowritename();
oddoreven();
 getch();
 }

 void codetowritename()
{
 if(a<=10)
{
cout<<"manoranjan";
}
else
{
 cout<<"not valid";
}
}

void oddoreven()
{
 int a;
 cout<<"enter any two number";
cin>>a;
if(a%2==0)
{
cout<<"even";
}
else
{
 cout<<"odd";
}
}