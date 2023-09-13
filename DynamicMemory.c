#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int* ptr=NULL;
    // ptr=(int*)malloc(5*sizeof(int));//array of size 5
    // int i;
    // for(i=0;i<5;i++)
    //     printf("%d\n",ptr[i]);

    // printf("Enter values\n");

    // for(i=0;i<5;i++)
    //     scanf("%d",&ptr[i]);

    // printf("See values\n");

    // for(i=0;i<5;i++)
    //     printf("%d\n",ptr[i]);
    
    // printf("%d",ptr[5]);

    int* ptr2=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
        printf("%d\n",&ptr2[i]);   
    return 0;
}