#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n], largest, second;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    if(a[0]>a[1]) { largest=a[0]; second=a[1]; }
    else { largest=a[1]; second=a[0]; }
    for(int i=2;i<n;i++) {
        if(a[i]>largest) { second=largest; largest=a[i]; }
        else if(a[i]>second) second=a[i];
    }
    printf("%d",second);
    return 0;
}
