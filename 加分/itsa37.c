//C_MM37
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6951

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0)
        printf("Origin\n");
    else if(x == 0)
        printf("y-axis\n");
    else if(y == 0)
        printf("x-axis\n");
    else if (x > 0 && y > 0)
        printf("1st Quadrant\n");
    else if (x < 0 && y > 0)
        printf("2nd Quadrant\n");
    else if (x < 0 && y < 0)
        printf("3rd Quadrant\n");
    else if (x > 0 && y < 0)
        printf("4th Quadrant\n");
}