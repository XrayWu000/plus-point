//C_MM35
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6947

#include <stdio.h>

int main() {
    int a;

    while(scanf("%d", &a)!=EOF){
        if (a % 400 == 0)
            printf("Bissextile Year\n");
        else if (a % 100 == 0)
            printf("Common Year\n");
        else if (a % 4 == 0)
            printf("Bissextile Year\n");
        else
            printf("Common Year\n");
    }
}