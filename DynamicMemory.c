#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr=NULL;
    ptr=(int*)malloc(5*sizeof(int));
    //array of size 5 common sense, why would there be one block of memory allocated
    int i;
    for(i=0;i<5;i++)
        printf("%d\n",ptr[i]);
    printf("Enter values\n");
    for(i=0;i<5;i++)
        scanf("%d",&ptr[i]);
    printf("See values\n");
    for(i=0;i<5;i++)
        printf("%d\n",ptr[i]);   
    printf("%d",ptr[5]);
    free(ptr);
    int* ptr2=NULL;
    ptr2=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
        printf("%d\n",ptr2[i]);  
    printf("relloc\n");
    ptr2=realloc(ptr2,3*sizeof(int));
    for(int i=0;i<3;i++)
        printf("%d\n",ptr2[i]);
    printf("Accessing index out of 3 size value = %d\n",ptr2[4]); 
    //Doubt, why getting zero or any correlation from previous calloc
    free(ptr2);
    printf("%d",*ptr2); 
    return 0;
}