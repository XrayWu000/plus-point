//C_MM17
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2929

#include <stdio.h>

long long gcd(long long x,long long y) {
    if(x%y==0)
        return y;
    else
        return gcd(y,x%y);
}

int main(){
    long long a,b,c;
   
	while(scanf("%lld %lld",&a,&b)!=EOF){
    printf("%lld\n",gcd(a,b));
    }
    return 0;
}