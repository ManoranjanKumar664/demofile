#include<iostream.h>
#include<conio.h>
void nochecking();
void main()
{
     clrscr();
 nochecking();
added();
check();
positiveornegative();
getch();
}

void nochecking()
{
      cout<<"enter any no.";
      cin>>a;
      if(a%2==0)
      {
        cout<<"even";
      }
      else
      {
        cout<<"odd""
      }
}


void positiveornegative()
{
 int b;
cout<<"enter any two number";
cin>>b;
if(a==0)
{
cout<<"neither negative nor positive"<<endl;
}
else if(a<0)
{
cout<<"negative"<<endl;
}
else
{
cout<<"positive"<<endl;
}
}

void check()
{
cout<<"enter any no";
cin>>x;
if(x<10)
{
cout<<"right";
}
else
{
cout<<"wrong";
}
}

void added()
{
cout<<"this is name manoranjan";
}