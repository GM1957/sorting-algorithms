#include<stdio.h>
#include<stdlib.h>
int i,j,k,l,a,key,c,ch;
int arr[6];
a =6;
void main(){
           for(k=0;k<a;k++){
                                printf("enter elements of the array: \n");
                                scanf("%d",&arr[k]);
                           }

            while(1){
                          printf("press 1. to display \n");
                          printf("press 2. to insertionsort array elements\n");
                          scanf("%d",&ch);
                          switch(ch){
                                       case 1 : display();
                                                break;
                                       case 2 : insertionsort();
                                                break;
                                    }
                    }
      }
void display(){
                   for(l=0;l<a;l++){
                                        printf("%d   ",arr[l]);
                                   }
             }
void insertionsort(){
                        for(i=1;i<a;i++){
                                             key = arr[i];
                                             j = i-1;
                                             while(j >= 0 && arr[j] > key){
                                                                           arr[j+1] = arr[j];
                                                                           j = j-1;
                                                                        }
                                                      arr[j+1] = key;
                                        }
                    }
