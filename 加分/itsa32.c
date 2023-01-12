//C_MM32
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2944

#include <stdio.h>

int main() {
    long long a, b, c, num;

    while(scanf("%lld", &num)!=EOF){
        a = num / 100;
        b = (num - num / 100 * 100) / 10;
        c = num % 10;
        if (num == (a * a * a + b * b * b + c * c * c))
            printf("Yes\n");
        else
            printf("No\n");
    }
}