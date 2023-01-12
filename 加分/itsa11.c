//C_MM011
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2923

#include <stdio.h>

int main(){
    long long a;
   
	while(scanf("%lld",&a)!=EOF){
    printf("NT10=%lld\n",a/10);
    printf("NT5=%lld\n",(a%10)/5);
    printf("NT1=%lld\n",a%5);
    }

    return 0;
}