#include<stdio.h>
int main() {
    int n, num, sum=0, fact, digit;
    scanf("%d",&n);
    num=n;
    while(num>0) {
        digit=num%10;
        fact=1;
        for(int i=1;i<=digit;i++) fact*=i;
        sum+=fact;
        num/=10;
    }
    if(sum==n) printf("Strong Number");
    else printf("Not Strong Number");
    return 0;
}
