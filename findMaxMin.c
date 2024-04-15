#include<stdio.h>
#include<limits.h>
int main(){
      int loopNumber, number;
      scanf("%d\n",&loopNumber);
      int max=INT_MIN, min=INT_MAX;
      for(int i=1;i<=loopNumber;i++){
        scanf("%d",&number);
        if(number>max){
            max=number;
        }
        else{
            min=number;
        }
      }
      printf("Max- %d\nMin- %d",max,min);
    return 0;
}