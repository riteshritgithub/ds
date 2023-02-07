#include<iostream.h>
#include<conio.h>
void swap(int &a,int &b)
  {
    int temp=a;
    a=b;
    b=temp;
  }
  void bubblesort(int arr[],int n)
  {
   for(int i=0;i<n-1;i++)
   {
    for(int j=0;j<n-1;j++)
    {
     if(arr[j]>arr[j+1])
     {
      swap(arr[j],arr[j+1]);
     }
    }
   }
  }
  void printarray(int arr[],int size)
  {
   for(int i=0;i<size;i++)
    {
     cout<<arr[i]<<" ";
    }
    cout<<" "<<endl;
  }
  int main()
  {
    int arr[]={64,32,40,34,9,34,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    clrscr();
    cout<<"Unsorted array is : \n";
    printarray(arr,n);
    bubblesort(arr,n);
    cout<<"Sorted array is : \n";
    printarray(arr,n);
    getch();
    return 0;

  }