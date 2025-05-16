#include <stdio.h>
int main()
{
    int m1, m2 , m3, m4, m5;
    float total, average;
    printf("Enter marks for English, Maths, Chemistry, Physics, Biology: "); 
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf(" Grade : %s", 
           (average >= 90) ? "A" :
           (average >= 80) ? "B" :
           (average >= 70) ? "C" :
           (average >= 60) ? "D" :
           (average >= 50) ? "E" : "F");
    return 0;
}