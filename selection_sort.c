#include<stdio.h>
int main(){
    int min,temp,i,j;
    int array[5]={20,30,10,50,40};
    for(i=0;i<5;i++){
        min=i;
        for(j=i+1;j<5;j++){
                 if(array[j]<array[min]){
                            min=j;
                            }
        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
}
for(int i=0;i<5;i++){
    printf("%d\n",array[i]);
}
}