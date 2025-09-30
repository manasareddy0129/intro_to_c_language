#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n], largest;
    for(int i=0;i<n;i++) 
      scanf("%d",&a[i]);
    largest=a[0];
    for(int i=1;i<n;i++) {
        if(a[i]>largest) largest=a[i];
    }
    printf("%d",largest);
    return 0;
}
