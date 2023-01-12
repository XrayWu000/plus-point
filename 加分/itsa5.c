//C_MM005
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6867

#include <stdio.h>

double turn(double f){
    int i = (int)(f + 0.5);
    return i;
}

int main() {
    double a;

    while(scanf("%lf", &a)!=EOF){
        printf("%.1lf\n", turn(a * a * 10)/10);
    }
}