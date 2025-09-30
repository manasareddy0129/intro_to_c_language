#include<stdio.h>
int main() {
    int n, sum;
    scanf("%d",&n);
    while(n>9) {
        sum=0;
        int temp=n;
        while(temp>0) {
            sum+=temp%10;
            temp/=10;
        }
        n=sum;
    }
    if(n==1) printf("Magic Number");
    else printf("Not Magic Number");
    return 0;
}
