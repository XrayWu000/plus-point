//C_MM31
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6939

#include <stdio.h>

int main() {
    long long a, sum, i;

    while(scanf("%lld", &a)!=EOF){
        sum = 0;
        for (i = 1; i < a; i++)
            if (i % 6 == 0)
                if (i % 12 != 0)
                    sum += i;
        printf("%lld\n", sum);
    }
}