#include <stdio.h>

int main() {
    int score;
    char grade;
    scanf("%d",&score);
    if (score >= 65) {
        if (score >= 80) {
            grade = 'A';
        }
        else if (score >= 75) {
            grade = 'B';
        }
        else {
            grade = 'C';
        }
    }
    else {
        if (score >= 40) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
    }

    printf("%c",grade);
}