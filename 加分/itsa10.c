//C_MM10
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6882

#include <stdio.h>

double turn(double f){
    int i = (int)(f + 0.5);
    return i;
}

int main() {
    double a;

    while(scanf("%lf", &a)!=EOF){
        a = turn((a*9/5+32)*10)/10;
        printf("%.1lf\n", a);
    }
}