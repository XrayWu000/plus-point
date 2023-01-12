//C_MM12
//

#include <stdio.h>
#include <math.h>

int main() {
    double speed = 0.238;
    int a;

    while(scanf("%d", &a)!=EOF){
        printf("%d\n", (int)ceil(a / speed));
    }
}