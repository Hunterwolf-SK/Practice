/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* countBits(int n, int* returnSize) {
    int*arr=(int*)malloc(sizeof(int)*(n+1));
    int count;
    int a;
    int i=0;
    int b;
    for(int x=0;x<=n;x++){
        count=0;
        a=x;
        while(a!=0){
            b=a%2;
            if(b==1) count++;
            a=a/2;
        }
        arr[i++]=count;   
    }
    *returnSize=n+1;
    return arr;
}