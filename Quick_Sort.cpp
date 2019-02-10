#include<iostream>
using namespace std;

//function to do swamping
int swap(int arr[],int low,int high,int pivot){
    //looping for mAKING swap
    while(low !=high){
        if(low !=high){
        	if(arr[low]>pivot){
        		int a = arr[low];
        		arr[low] = arr[high-1];
        		arr[high-1] = a;
        		high--;
        		
        	}
        	else {
        	    low++;
        	}
        }
    }
    return high;
    //if fount the middle element
    if (low==high){
            return high;
    }
    if(low>high){
        return 0;
    }
}	
//for partitioning
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int p = swap(arr,low,high,pivot);
	int b = arr[p];
	arr[p] = arr[high];
	arr[high] = b;
	return p;
}
//quick sorting
void QS(int arr[],int low,int high){
    if (low>=high){
        return;
    }
    else {
    	int p = partition(arr,low,high);
    	QS(arr,low,p-1);
    	QS(arr,p+1,high);
    }
}
//displaying elemets
int display(int arr[]){
	for(int i = 0;i<6;i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
	int p;
	 int arr[]={3,5,1,2,6,4};
	 QS(arr,0,5);
	 display(arr);
	 
}	
