//program of stucuture for five employee that provides the information - print and display empno,empname,address and age

#include <stdio.h>
#include <string.h>


struct employee {
  int empno; 
  char empname[20]; 
  char address[50]; 
  int age;
};

int main() {
  
  struct employee emp[5];
  
  printf("Enter the details of 5 employees:\n");
  for (int i = 0; i < 5; i++) {
    printf("Employee %d:\n", i + 1);
    printf("Enter employee number: ");
    scanf("%d", &emp[i].empno);
    printf("Enter employee name: ");
    scanf("%s", emp[i].empname);
    printf("Enter employee address: ");
    scanf("%s", emp[i].address);
    printf("Enter employee age: ");
    scanf("%d", &emp[i].age);
    printf("\n");
  }
  
  
  printf("EmpNo\tEmpName\tAddress\t\t\tAge\n");
  
  for (int i = 0; i < 5; i++) {
    printf("%d\t%s\t%s\t%d\n", emp[i].empno, emp[i].empname, emp[i].address, emp[i].age);
  }
  
  return 0;
}
