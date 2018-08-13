#include<iostream.h>
#include<conio.h>
void main()
{
 int a;
 int *ptr=&a;
 clrscr();
 cout<<"\n enter the value of a(input): ";
 cin>>a;
 cout<<"\n the address of a(input) is:"<<ptr;
 cout<<"\n the value of a(input) is:"<<*ptr;
 cout<<"\n THIS PROGRAM IS DONE USING POINTER IN C++ PROGRAMMING LANGUAGE";
}