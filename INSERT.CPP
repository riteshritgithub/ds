#include<iostream.h>
#include<conio.h>

int main()
{
	int arr[100];
	int i,item,pos,size=7;

	clrscr();
	cout<<"ENTER  7 ELEMENTS";
	for(i=0;i<size;i++)
	cin>>arr[i];

	cout<<"ARRAY BEFORE INSERTION";
	for(i=0;i<size;i++)
	cout<<arr[i];
	cout<<endl;

	cout<<"ENTER THE ELEMENT TO BE INSERTED";
	cin >>item;

	cout<<"ENTER THE POSITION AT WHICH THE ELEMENT IS TO BE INSERTED";
	cin>>pos;

	size++;

	for(i=size-1;i>=pos;i--)
	arr[i]=arr[i-1];
	arr[pos-1]=item;

	cout<<"ARRAY AFTER INSERTION";
	for(i=0;i<size;i++)
	cout<<arr[i];
	cout<<endl;

	return 0;
	}
