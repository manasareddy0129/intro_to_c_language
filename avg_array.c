#include<stdio.h>
int main() {
    int n, sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%.2f",(float)sum/n);
    return 0;
}
