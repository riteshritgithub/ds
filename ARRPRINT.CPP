#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int array[300];
int i,j,size,temp;
cout<<"enter the size"<<endl;
cin>>size;
cout<<"enter the array number"<<endl;
for(i=0;i<size;i++)
{
 cin>>array[i];
}
for(i=0;i<size;i++)
{
 for(j=i+1;i<size;i++)
 {
  if(array[j]>array[j++])
  {
    temp=array[j];
    array[j]=array[j+1];
    array[j=1]=temp;
  }
 }
}
cout<<"printing sorted element"<<endl;
for(i=0;i<size;i++)
{
 cout<<array[i]<<endl;
}

getch();
}