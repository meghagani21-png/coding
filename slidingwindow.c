#include<stdio.h>
    int longestwindow(int days[], int n, int k){
        int left = 0;
        int right = 0;

        int maxlen =0;
        for(right = 0; right<n; right++){
            while(days[right] - days[left] > k){
                left ++;
            }
            int len = right-left +1;
            if(len>max){
                maxlen =len;
            }
        }
    }
int main(){
    

    return 0;
}