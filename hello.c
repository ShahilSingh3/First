# include<stdio.h>
int bs_recurs(int *arr, int l, int h, int key);



int main(){
    int arr[]={12,13,14,15,16,17,18};
    int key;
    printf("Enter the key");
    scanf("%d", &key);
    int n=7;
    int result= bs_recurs(arr,0,n,key);
    printf("Yaay my first commit");
    (result==-1)? printf("%d Not found", key):printf("%d found at %d", key, result);
     return 0;
}








int bs_recurs(int *arr, int l, int h, int key){ // makes a end point of array (h) and a starting point(l)
    int mid=(int)(h+l)/2; //define a middle value 
    if(h-l<1)  //base case
    return -1;
    if(arr[mid]==key){
        return mid; // return the index of the middle if found at there 
    }
    if(arr[mid]>key){   
        int result = bs_recurs(arr,l,mid-1,key); // high value redefined to mid -1  
        return result;
    }
      if(arr[mid]<key){
        int result = bs_recurs(arr,mid+1,h,key);  // low value redefined to mid+1
        return result;
    }
}