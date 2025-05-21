#include<stdio.h>
int main(){
    int size=5, sub=5;
    int rollno[size]; //{1,2,3,4,5}
    int mark[size][sub];
    int total[size];
    printf("Enter 5 roll no:");
    for (int i=0; i<size; i++){
        scanf("%d", &rollno[i]);
    }
    for(int i =0; i<size; i++){
        printf("Enter marks of roll no %d: ", rollno[i]);
        for(int j=0; j<sub; j++){
            scanf("%d", &mark[i][j]);
        }
    }
    for(int i=0; i<size; i++){
        int sum=0;
        for(int j=0; j<sub; j++){
            sum+=mark[i][j];
        }
        total[i]= sum;
    }
    printf("-------------------------- SCORE CARD --------------------------\n");
    printf("Roll No\tHindi\tEnglish\tMaths\tScience\tSocial\tTotal\n");
    for(int i=0; i<size; i++){
        printf("%d\t", rollno[i]);
        for(int j=0; j<sub; j++){
            printf("%d\t", mark[i][j]);
        }
        printf("%d\n", total[i]);
    }
}