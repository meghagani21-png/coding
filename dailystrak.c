#include<stdio.h>
int main(){
    int n, T;
    int arr[n]
    print("enter the number of elements");
    scanf("%d %d", &n);

    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int left =0;
    int right = n-1;
    int pos = n-1;
     

    while(left<=right){
        int leftsq = arr[left]*arr[left];
        int rightsq = arr[right] * arr[right];
    }

    if(leftsq>rightsq){
        resukt[pos] = leftsq;
        left ++;
    }

    else{

        result[pos] = rightsq;
        right --;
    }





    return 0;
}