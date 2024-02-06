#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define p printf
#define s scanf
#define g gotoxy
void gotoxy(int x, int y) {
  COORD coord;
  coord.X = x - 1; // Adjust for zero-based indexing
  coord.Y = y - 1; // Adjust for zero-based indexing
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main (){
    char name[50], department[50];
    int grade;
    do{
        g(2,3);p("Enter name: ");
    g(2,4);p("Enter Department: ");
    g(2,5);p("Enter your grade in midterm: ");
    g(14,3);gets(name);
    g(20,4);s("%s", department);
    g(31,5);s("%d", &grade);
    if (grade > 50 && grade < 100){
        if (grade < 75){
            g(2,6);p("5.0");
            g(2,7);p("Failed");
        }
        else if (grade > 74 && grade < 77){
            g(2,6);p("3.0");
            g(2,7);p("Passed");
        }
        else if (grade > 76 && grade < 81){
            g(2,6);p("2.75");
            g(2,7);p("Passed");
        }
        else if (grade > 80 && grade < 84){
            g(2,6);p("2.5");
            g(2,7);p("Passed");
        }
        else if (grade > 83 && grade < 87){
            g(2,6);p("2.25");
            g(2,7);p("Passed");
        }
        else if (grade > 86 && grade < 90){
            g(2,6);p("2.0");
            g(2,7);p("Passed");
        }
        else if (grade > 89 && grade < 93){
            g(2,6);p("1.75");
            g(2,7);p("Passed");
        }
        else if (grade > 92 && grade < 96){
            g(2,6);p("1.5");
            g(2,7);p("Passed");
        }
        else if (grade > 95 && grade < 99){
            g(2,6);p("1.25");
            g(2,7);p("Passed");
        }
        else if (grade > 98 && grade < 101){
            g(2,6);p("1.0");
            g(2,7);p("Passed");
        }
    }
    else{
        g(2, 8);p("INVALID INPUT");
    }
    } while();
    
}