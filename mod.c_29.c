
 //Write a program of structure employee that provides the following  information -print and display empno, empname, address and age


#include <stdio.h>
#include <string.h>


struct employee {
  int empno; 
  char empname[20]; 
  char address[50]; 
  int age; 
};

int main() {
  
  struct employee emp[3];
  
  
  emp[0].empno = 101;
  strcpy(emp[0].empname, "alka");
  strcpy(emp[0].address, "123 Main Street,surat");
  emp[0].age = 25;
  
  
  emp[1].empno = 102;
  strcpy(emp[1].empname, "Bharat");
  strcpy(emp[1].address, "45 Park Avenue,vapi");
  emp[1].age = 30;
  
  
  emp[2].empno = 103;
  strcpy(emp[2].empname, "gopal");
  strcpy(emp[2].address, "7 Green vally,surat");
  emp[2].age = 35;
  
  printf("EmpNo\tEmpName\tAddress\t\t\t\t\t\tAge\n");
  
  for (int i = 0; i < 3; i++) {
    printf("%d\t\t%s\t%s\t\t\t%d\n", emp[i].empno, emp[i].empname, emp[i].address, emp[i].age);
  }
  
  return 0;
}