//C program to declare an array called class and take total number of students 
//and take 10 students roll number from the user and print all the rolls of students and
// also print 8th student roll numbers and 5th student roll number separately:
#include <stdio.h>

int main() {
  int class[10];
  int n;
  printf("Enter the total number of students: ");
  scanf("%d", &n);
  printf("Enter the roll numbers of the students: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &class[i]);
  }
  printf("The roll numbers of the students are: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", class[i]);
  }
  printf("\nThe 8th student's roll number is: %d", class[7]);
  printf("\nThe 5th student's roll number is: %d", class[4]);
  return 0;
}