//Write a program to implement bubble sort and if the array is sorted then it will not iterate anymore

//3.1
//If the input is not user defined(Without using function)
/*#include <stdio.h>
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int temp,swapped,i,j;
	for(i=0;i<n;i++){
		swapped=0;//Initializing swapped as false
		for(j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=1;//Now swapped is true
			}
		}
		if(!swapped){
			printf("\n\t The array is alreay sorted : ");
			for(i=0;i<n;i++){
				printf("%d ",arr[i]);
			}
			return 0;
		}
	}
	if(swapped){
		printf("\n\t Sorted array : ");
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
	}
	return 0;
}*/

/*//3.2
//If the input is not user defined(using function)
#include <stdio.h>
int bubbleSort(int arr[],int n){
	int temp,swapped,i,j;
	for(i=0;i<n-1;i++){
		swapped=0;//Initialiing swapped as False
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j+1];
				arr[j+1]=temp;
				swapped=1;//Now swapped is True
			}
		}
		if(!swapped){
			return 1;//If the array is already sorted
		}
	}
	return 0;//If the array is not sorted
}
int main(){
	int n;
	printf("\n\t Enter the number of elements of the array : ");
	scanf("%d",&n);
	int arr[n],i;
	printf("\n\t Enter %d elements : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int sort=bubbleSort(arr,n);
	if(sort){
		printf("\n\t The array is already Sorted : ");
	}else{
		printf("\n\t Sorted array : ");
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}*/

//3.3
//If the input is not user defined(without function)
#include <stdio.h>
int main(){
	int n,temp,swapped;
	printf("\n\t Enter the number of elements : ");
	scanf("%d",&n);
	int arr[n],i,j;
	printf("\n\t Enter %d elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++){
		swapped=0;//Swapped is now false
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=1;//Swapped is now true
			}
		}
		if(!swapped){
			printf("\n\t The array is already sorted : ");
			for(i=0;i<n;i++){
				printf("%d ",arr[i]);
			}
			return 0;
		}
	}
	if(swapped){
		printf("\n\t Sorted array : ");
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
