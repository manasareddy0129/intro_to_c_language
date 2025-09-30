#include<stdio.h>
int main() {
    int n, pos=0, neg=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]>0) pos++;
        else if(a[i]<0) neg++;
    }
    printf("Positive=%d Negative=%d",pos,neg);
    return 0;
}
