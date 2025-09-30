#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n], smallest;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    smallest=a[0];
    for(int i=1;i<n;i++) {
        if(a[i]<smallest) smallest=a[i];
    }
    printf("%d",smallest);
    return 0;
}
