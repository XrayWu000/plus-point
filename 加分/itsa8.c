//C_MM07
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6873

#include <stdio.h>

int main() {
    double a;

    while(scanf("%lf", &a)!=EOF){
        if(a<0)
            break;
        printf("%.0lf ", a);
        printf("%.0lf ", a*a);
        printf("%.0lf\n", a*a*a);
    }
}