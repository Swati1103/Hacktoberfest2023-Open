#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    void heapify(int arr[], int n, int i)  
    {
      
      int large=i;
      int l=2*i+1, r=2*i+2;
      if(l<n && arr[l]>arr[large])
      large=l;
      if(r<n && arr[r]>arr[large])
      large=r;
      if(large!=i){
          swap(arr[i],arr[large]);
          heapify(arr,n,large);
      }
    }

    public:
    
    void buildHeap(int arr[], int n)  
    { 
    
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    }

    
    public:
    
    void heapSort(int arr[], int n)
    {
        
        buildHeap(arr,n);
        for(int i=n-1;i>=1;i--){
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
    }
};

void printArray(int arr[], int size) {
int i;
for (i=0; i < size; i++) 
 printf("%d ", arr[i]); 
printf("\n");
}

int main()
{
int arr[1000000],n,T,i;
scanf("%d", &T); 
while(T--){
scanf("%d", &n); 
for(i=0;i<n;i++)     
   scanf("%d",&arr[i]); 

Solution ob;
ob.heapSort(arr,n);
printArray(arr,n);
}
return 0;
}
