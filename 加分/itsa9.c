//C_MM09
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6876

#include <stdio.h>
#include <math.h>

int main() {
    long long a, t, i;

    while(scanf("%lld", &t)!=EOF){
        a = 1;
        if(t>31){
            printf("Value of more than 31\n");
            continue;
        }
        for (i = 0; i < t; i++){
            a *= 2;
        }
        printf("%lld\n", a);
    }
}