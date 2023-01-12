//C_MM21
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6915

#include <stdio.h>

int main(){
    long long a,b=1,i;
   
	while(scanf("%lld",&a)!=EOF){
        for(i=1; i<=a; i++) 
            b*=i;
        printf("%lld\n",b);
    }

    return 0;
}