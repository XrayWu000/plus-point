//C_MM26
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6928

#include <stdio.h>

int main(){
    long long a,i;
   
	while(scanf("%lld",&a)!=EOF){
        for(i=1; i<=a; i++)
            printf("%lld*%lld=%lld\n",i,i,i*i);
    }

    return 0;
}