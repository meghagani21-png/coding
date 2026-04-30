#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];
 
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                printf("true");
          
            }
            else{
            printf("false");
            }
        }
    }


    return 0;
}


//
bool uniqueoccurences(int arr[],int n){
    
}
int main(){
    int arr[] = {1,2,12,1,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
}
