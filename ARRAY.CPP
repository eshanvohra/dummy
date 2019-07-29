#include<iostream.h>
#include<conio.h>
void main()
{int a[5],i;
clrscr();
cout<<"\nenter 5 elements";
for(i=0;i<5;i++)
{cin>>a[i];
}
cout<<"\n array elements are:";
for(i=0;i<5;i++)
{cout<<"\na["<<i+1<<"] ="<<a[i];
}
getch();
}
