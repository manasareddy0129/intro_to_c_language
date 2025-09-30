#include<stdio.h>
int main() {
    int n, key;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);
    int low=0, high=n-1, mid, flag=0;
    while(low<=high) {
        mid=(low+high)/2;
        if(a[mid]==key) { flag=1; break; }
        else if(a[mid]<key) low=mid+1;
        else high=mid-1;
    }
    if(flag) printf("Found at index %d", mid);
    else printf("Not Found");
    return 0;
}
