#include<stdio.h>
/*
sample input:5 for loop, n numbers -3, -4, 0, -5, 12
output: neg:3, pos:1, even:3, odd:2
sample input:7 fro loop, n numbers 2, 7, -22, 55, 0, -9, 1
output even:3, odd:3, neg:2 pos:4
*/
int main(){
      int n;
      scanf("%d\n",&n);
      int even=0,odd=0,pos=0,neg=0,zero=0;
      //assign inputNumber serially on it
      int inputNumber;
      for(int i=1; i<=n;i++){
        scanf("%d",&inputNumber);
        if(inputNumber%2==1 || inputNumber%2==-1){
            odd++;
        }else{
            even++;
        }
        if(inputNumber>0){
            pos++;
        }
        else if(inputNumber<0){
            neg++;
        }
        else{
            zero++;
        }
      }
      printf("Even-%d\nOdd-%d\nPositive-%d\nNegative-%d\nZero-%d",even,odd,pos,neg,zero);
    return 0;
}