#include<stdio.h>
#include<stdlib.h>
int b,c,i,j,k,l;
int ch;
int a=5;
int arr[5];

main(){
  //printf("enter the length of array: /n");
  //scanf("%d",&a);

  for (i=0;i<a;i++){
                        printf("enter the elements of array: \n");
                        scanf("%d",&arr[i]);
                   }



                   while(1){
                                printf("press 1. for display the array elements: \n\n\n");
                                printf("press 2. for sort the array elements: \n\n\n");
                                scanf("%d",&ch);

                                switch(ch){
                                                case 1: display();
                                                        break;
                                                case 2: sort();
                                                        break;

                                          }
                           }
           }

void display(){
                   for(j=0;j<a;j++){
                                      printf("%d \n",arr[j]);
                                   }
              }

void sort(){
             for(l=0;l<a-1;l++){
                 for(k=0;k<a-1;k++){
                                       if(arr[k]>arr[k+1]){
                                                              c = arr[k];
                                                              arr[k] = arr[k+1];
                                                              arr[k+1] = c;
                                                          }
                                       else{
                                               k++;
                                           }
                                   }
                              }
           }
