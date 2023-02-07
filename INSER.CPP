#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[100],size,i,j,temp;
	cout<<"enter size:-"<<endl;
	cin>>size;
	cout<<"enter the elements :-"<<endl;
	for(i=0;i<size;i++)
	{
	 cin>>arr[i];
	}
	cout<<"ARRAY BEFORE INSERTION :-\n";
	for(i=0;i<size;i++)
	{
	 cout<<arr[i];
	 cout<<endl;
	}

	for(i=1;i<size;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0)
		{
			if(temp<arr[j])
			{
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
			j--;
		}


		arr[j+1]=temp;
	}
	cout<<endl;
	cout<<"ARRAY AFTER INSERTION SORT :-"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<",";
	}
getch();
}