//C_MM14
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6894

#include <stdio.h>

int main() {
    int t, sec, min, hour, day;

    scanf("%d", &t);
    day = t / 86400;
    hour = (t % 86400) / 3600;
    min = (t % 3600) / 60;
    sec = t % 60;
    printf("%d days\n%d hours\n", day, hour);
    printf("%d minutes\n%d seconds\n", min, sec);
}