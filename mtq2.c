#include <stdio.h>

int main() {
    char ch;
    int count1 = 0, count2 = 0, count3 = 0;
    int max_inputs;

    scanf("%d", &max_inputs);

    for (int i = 0; i < max_inputs+1; i++) {
        while ((ch = getchar()) != '\n') {
            if (ch == '(')
                count1++;
            else if (ch == ')')
                count1--;
            else if (ch == '{')
                count2++;

            else if (ch == '}')
                count2--;
                
            else if (ch == '[')
                count3++;
            else if (ch == ']')
                count3--;
        }

    }

    if (count1 == 0 && count2 == 0 && count3 ==0)




        printf("Parantezler uyumlu\n");
    else
        printf("Parantezler uyumlu degil\n");

    return 0;
}