//C_MM19
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6909

#include <stdio.h>

int main(){

    int time;
    double bill;
    scanf("%d",&time);

    if (time <= 800)
        bill = time * 0.9;
    else if (time < 1500){
        bill = time * 0.9 * 0.9;
    }
    else {
        bill = time*0.9*0.79;
    }

    printf("%.1f\n", bill);
}