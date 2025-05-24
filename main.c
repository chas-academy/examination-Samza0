#include <stdio.h>

int main() {
    char name1[11], name2[11], name3[11], name4[11], name5[11];
    int total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0;
    int score, i;

    // Student 1
    scanf("%s", name1);
    for (i = 0; i < 13; i++) {
        scanf("%d", &score);
        total1 += score;
    }

    // Student 2
    scanf("%s", name2);
    for (i = 0; i < 13; i++) {
        scanf("%d", &score);
        total2 += score;
    }

    // Student 3
    scanf("%s", name3);
    for (i = 0; i < 13; i++) {
        scanf("%d", &score);
        total3 += score;
    }

    // Student 4
    scanf("%s", name4);
    for (i = 0; i < 13; i++) {
        scanf("%d", &score);
        total4 += score;
    }

    // Student 5
    scanf("%s", name5);
    for (i = 0; i < 13; i++) {
        scanf("%d", &score);
        total5 += score;
    }

    // Capitalize first letter of student names
    if (name1[0] >= 'a' && name1[0] <= 'z') name1[0] -= 32;
    if (name2[0] >= 'a' && name2[0] <= 'z') name2[0] -= 32;
    if (name3[0] >= 'a' && name3[0] <= 'z') name3[0] -= 32;
    if (name4[0] >= 'a' && name4[0] <= 'z') name4[0] -= 32;
    if (name5[0] >= 'a' && name5[0] <= 'z') name5[0] -= 32;

    // Find highest total
    int max = total1;
    char* top = name1;

    if (total2 > max) { max = total2; top = name2; }
    if (total3 > max) { max = total3; top = name3; }
    if (total4 > max) { max = total4; top = name4; }
    if (total5 > max) { max = total5; top = name5; }

    printf("%s\n", top);  // Step 1: highest scorer

    // Group average
    int avg = (total1 + total2 + total3 + total4 + total5) / 5;

    // Step 2: Print names below group average
    if (total1 < avg) printf("%s\n", name1);
    if (total2 < avg) printf("%s\n", name2);
    if (total3 < avg) printf("%s\n", name3);
    if (total4 < avg) printf("%s\n", name4);
    if (total5 < avg) printf("%s\n", name5);

    return 0;
}
