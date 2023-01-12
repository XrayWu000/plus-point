//C_MM25
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6925

#include <stdio.h>

int main() {
    int a, i, sum;

    while(scanf("%d", &a)!=EOF){
        sum = 0;
        for (i = 1; i <= a; i++)
            if (i % 3 == 0)
                sum += i;
        printf("%d\n", sum);
    }
}