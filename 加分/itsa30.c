//C_MM30
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2942

#include <stdio.h>

int haveFactor(long long num){
    long long i;

    for (i = 2; i < num; i++)
        if(num % i == 0)
            return 1;
    return 0;
}

int main() {
    long long a;

    while(scanf("%lld", &a)!=EOF){
        if(haveFactor(a))
            printf("NO\n");
        else
            printf("YES\n");
    }
}