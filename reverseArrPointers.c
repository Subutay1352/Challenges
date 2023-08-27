#include <stdio.h>

#define asize(x) sizeof(x)/sizeof(x[0])

int reverseArr(int *p,int size) {

    int xArr[10];
    for(int i=0;i<size;++i) {
        xArr[i]=p[i];
    }
    for (int i = 0; i < size; i++)
    {
        p[size-i-1]=xArr[i];
    }
    

}
int arr[] = {0,1,2,3,4,5,6,7,8,9};
int main() {
    for (size_t i = 0; i < asize(arr); i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("------------------\n");
    reverseArr(arr,asize(arr));

    for (size_t i = 0; i < asize(arr); i++)
    {
        printf("%d\n",arr[i]);
        
    }
    printf("------------------\n");
}