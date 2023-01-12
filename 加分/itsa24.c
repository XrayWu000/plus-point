//C_MM24
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6922

#include <stdio.h>

int main() {
    double a, b, c;

    while(scanf("%lf %lf", &a, &b)!=EOF){
        if(a <= 60)
            c = a * b;
        else if(a<=120)
            c = (a - 60) * b * 1.33 + 60 * b;
        else
            c = (a - 120) * b * 1.66 + 60 * b * 1.33 + 60 * b;
        printf("%.1lf\n", c);
    }
}