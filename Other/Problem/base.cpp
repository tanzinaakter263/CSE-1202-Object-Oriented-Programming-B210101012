
#include<stdio.h>
void Bubble_sort(long A[],long n){
long i,j,temp;
for(i=0;i<n-1;i++){
for(j=0;j<n-1-i;j++){
if(A[j]>A[j+1]){
temp=A[j];
A[j]=A[j+1];
A[j+1]=temp;
}
}
}
}
int main(){
long arr[100],n;
printf("Enter num of elements:");
scanf("%ld",&n);
printf("Enter %ld integers\n",n);
for(int i=0;i<n;i++)
scanf("%ld",&arr[i]);
Bubble_sort(arr,n);

printf("Sorted list in ascending order:\n");
for(int i=0;i<n;i++)
printf("%ld\t",arr[i]);
return 0;

}

