//C_MM34
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2946

#include <stdio.h>

int main(){
    long long in, i;

    while (scanf("%lld", &in) != EOF){
        for (i = 1; i <= in; i++) {
            if (in % i == 0){
                if(i == 1)
                    printf("%lld",i);
                else
                    printf(" %lld",i);
            }
        }
        printf("\n");
    }
}