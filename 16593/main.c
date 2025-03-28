#include <stdio.h>

int main() {
    long long input1, input2;
    int result = 1;
    
    scanf("%lld %lld", &input1, &input2);

    while (input2 > input1) {
        result++;
        if (input2 % 10 == 1) {
            input2 /= 10;
        }
        else if (input2 % 2 == 0) {
            input2 /= 2;
        }
        else {
            printf("-1");
            return 0;
        }
    }

    if (input2 == input1) {
        printf("%d", result);
    }
    else {
        printf("-1");
    }
}