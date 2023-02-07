#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[100],i,size,index;
	cout<<"ENTER SIZE"<<endl;
	cin>>size;
	cout<<"ENTER ELEMENTS :-"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"ENTER INDEX :-"<<endl;
	cin>>index;
	for(i=index;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
	cout<<"ARRAY AFETR DELECTION:-"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	getch();
}
