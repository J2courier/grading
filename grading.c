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
    char name[50], course[50], ans;
    int grade;
    system("cls");
    do{
        ask:
    g(2,3);p("STUDENT NAME: ");
    g(2,4);p("COURSE/YEAR LEVEL: ");
    g(2,5);p("MIDTERM GRADE: ");
    g(20,3);s("%[^\n]", name);
    //g(30,3);s("%[^\n]", name);
    g(20,4);s("%[^\n]", course);
    g(20,5);s("%d", &grade);
    if (grade > 50 && grade < 100){
        if (grade < 75){
            g(2,6);p("Equivalent grade is 5.0");
            g(2,7);p("Failed");
            g(2, 8);p("Try Again? Y/N");
            g(19, 8);s("%s", &ans);
            system("cls");
        }
        else if (grade > 74 && grade < 77){
            g(2,6);p("Equivalent grade is 3.0");
            g(2,7);p("Passed");
            g(2, 8);p("Try Again? Y/N: \r");
            g(19, 8);s("%s", &ans);
            system("cls");

        }
        else if (grade > 76 && grade < 81){
            g(2,6);p("Equivalent grade is 2.75");
            g(2,7);p("Passed");
            g(2, 8);p("Try Again? Y/N: \r");
            g(19, 8);s("%s", &ans);
            system("cls");

        }
        else if (grade > 80 && grade < 84){
            g(2,6);p("Equivalent grade is 2.5");
            g(2,7);p("Passed");
            g(2, 8);p("Try Again? Y/N: \r");
            g(19, 8);s("%s", &ans);
            system("cls");

        }
        else if (grade > 83 && grade < 87){
            g(2,6);p("Equivalent grade is 2.25");
            g(2,7);p("Passed");
            g(2, 8);p("Try Again? Y/N: \r");
            g(19, 8);s("%s", &ans);
            system("cls");

        }
        else if (grade > 86 && grade < 90){
            g(2,6);p("Equivalent grade is 2.0");
            g(2,7);p("Passed");
            g(2, 8);p("Try Again? Y/N: \r");
            g(19, 8);s("%s", &ans);
            system("cls");

        }
        else if (grade > 89 && grade < 93){
            g(2,6);p("Equivalent grade is 1.75");
            g(2,7);p("Passed");
             g(2, 8);p("Try Again? Y/N: \r");
            g(19, 8);s("%s", &ans);
            system("cls");

        }
        else if (grade > 92 && grade < 96){
            g(2,6);p("Equivalent grade is 1.5");
            g(2,7);p("Passed");
             g(2, 8);p("Try Again? Y/N: \r");
            g(19, 8);s("%s", &ans);
                        system("cls");

        }
        else if (grade > 95 && grade < 99){
            g(2,6);p("Equivalent grade is 1.25");
            g(2,7);p("Passed");
             g(2, 8);p("Try Again? Y/N: \r");
            g(19, 8);s("%s", &ans);
            system("cls");

        }
        else if (grade > 98 && grade < 101){
            g(2,6);p("Equivalent grade is 1.0");
            g(2,7);p("Passed");
            g(2, 8);p("Try Again? Y/N:");
            g(19, 8);s("%s", &ans);
            system("cls");

        }
    }

    else{
        g(2, 8);p("INVALID INPUT");
        g(2, 9);p("Try Again? Y/N:");
        g(19, 9);s("%s", &ans);
        system("cls");
        
    }
   } while(ans == 'y' || ans == 'Y');

    exit(0);
    
}
