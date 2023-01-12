//C_MM02
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6858

#include <stdio.h>

int main() {
    double a, b;

    while(scanf("%lf %lf", &a, &b)!=EOF){
        printf("%.1lf\n", a * b / 2);
    }
}