#include<iostream>
using namespace std;
class bubblesort
{ public:
int n, i, arr[50], j, temp;
void readarray()
{cout<<"Enter total number of elements :";
cin>>n;
cout<<"Enter "<<n<<" numbers :";
for(i=0; i<n; i++)
{cin>>arr[i];
}}
void sortoperation()
{ for(i=0; i<(n-1); i++)
{ for(j=0; j<(n-1); j++)
{ if(arr[j]>arr[j+1])
{ temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}}}
}
void displayarray()
{ cout<<"Sorted list in ascending order :\n";
for(i=0; i<n; i++)
{ cout<<arr[i]<<" ";
}}};
int main()
{bubblesort obj1;
obj1.readarray();
obj1.sortoperation();
obj1.displayarray();
return 0;
}
