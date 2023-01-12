//C_MM05
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6864

#include <stdio.h>

int main() {
    long long a, b;

    scanf("%lld %lld", &a, &b);
    printf("%lld+%lld=%lld\n", a, b, a + b);
    printf("%lld*%lld=%lld\n", a, b, a * b);
    printf("%lld-%lld=%lld\n", a, b, a - b);
    if(a%b<0)
        printf("%lld/%lld=%lld...%lld\n", a, b, a / b + 1, a % b + b);
    else
        printf("%lld/%lld=%lld...%lld", a, b, a / b, a % b);
}