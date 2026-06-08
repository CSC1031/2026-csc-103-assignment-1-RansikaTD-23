//AS20250358
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m1, m2, m3 , total, highest;
    float  average;

    //input
    printf("Please Enter mark for Mathematics (out of 100): ");
    scanf("%d", &m1);

    printf("Please Enter mark for Science (out of 100)    : ");
    scanf("%d", &m2);

    printf("Please Enter mark for English (out of 100)    : ");
    scanf("%d", &m3);

    //Calculations
    total   = m1 + m2 + m3;
    average = total / 3.0;

    //highest
    highest = m1 ;
    if (m1>highest)
        highest = m2;
    if (m3>highest)
        highest = m3;

    //Grade
    char grade;
    if (average >= 80) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else if (average >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    //distinction
    int distinction ;
    if (average >= 85 && m1 >= 80 && m2>=80 && m3>=80){
        distinction = 1;
    } else {
        distinction = 0;
    }

    //passed or failed
    int passed;
    if (average >= 50 && m1 >= 40 && m2 >= 40 && m3 >= 40) {
        passed = 1;
    } else {
        passed = 0;
    }

    //output
    printf("\n-------------------------------------\n");
    printf("----------------RESULT---------------\n");
    printf("-------------------------------------\n");
    printf("Mark of Mathematics: %d\n",m1);
    printf("Mark of Science    : %d\n",m2);
    printf("Mark of English    : %d\n",m3);
    printf("-------------------------------------\n");
    printf("Total Marks        : %d\n", total);
    printf("-------------------------------------\n");
    printf("Average Mark       : %.2f\n",average);
    printf("Highest Mark       : %d\n", highest);
    printf("-------------------------------------\n");
    printf("Grade              : %c\n",grade);
    printf("Distinction        : %s\n",distinction? "Yes":"No");
    printf("Status             : %s\n",passed ? "PASS" : "FAIL");
    printf("-------------------------------------\n");


    return 0;
}
