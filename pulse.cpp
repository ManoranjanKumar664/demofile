#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
int a, i;
cout<<"enter any no.";
cin>>a;
for(i=2;i<a-1;i++)
{
if(a%2==0)
{
cout<<"composite";
return;
}
}
getch();
}
