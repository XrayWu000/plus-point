//C_MM1
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6891

#include <stdio.h>

int main() {
    int sh, sm, fh, fm, t = 0;

    scanf("%d %d %d %d", &sh, &sm, &fh, &fm);
    t = (fh - sh) * 60 + fm - sm;
    if (t <= 120 && t >= 30)
        t = t / 30 * 30;
    else if(t <= 240)
        t = ((t - 120) / 30) * 40 + 120;
    else
        t = ((t - 240) / 30) * 60 + 280;
    printf("%d\n", t);
}