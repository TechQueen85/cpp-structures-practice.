// IN THIS FILE WE HAVE DONE STURUCTURES WHOLE CONCEPT
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <fstream>
using namespace std;
void printNames(char (*p)[10], int rows) {
    for(int i=0; i<rows; i++) {
        cout << *(p + i) /*or p[i]*/ << endl;   // row is itself a string
    }
}
struct Student {
    char name[50];
    int roll;
    float marks;
};
struct student1{
    int a;
    float w;
};
struct address{
    char city[20];
    int code;
};

struct student{
    int roll;
    char name[20];
    float marks;
    address addr;
};

void printStudents(student (*p)[2], int rows) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<2; j++) {
            cout << p[i][j].name << " (" << p[i][j].roll << ")\t";
        }
        cout << endl;
    }
}
int main(){
    // USING POINTERS IN 2D ARRAYS AT PASSING FUNCTIONS

    /*char names[3][10] = {"Rida", "Sara", "Tony"};
    printNames(names, 3);
    */
    // Using Pointers To Access Struct (BASIC CONCEPT)
    /*student1 c, *p;
    p=&c;
    cout<< "Enter value:"<< endl;
    cin >> c.a;
    cout << "Enter double value:" << endl;
    cin >> c.w;
    cout << "Values:" << endl;
    cout << ((*p).a) << endl;
    cout << ((*p).w) << endl;
    */

    // STRUCTURES IN LOOPS
    /*student s[3];
    for(int i=0 ;i<3; i++){
        cout << "Enter student " << i + 1 <<  " name: "<< endl;
        cin >> s[i].name;
        cout << "Enter rollno: " << endl;
        cin >> s[i].roll;
        cout << "Enter marks: " << endl;
        cin >> s[i].marks;
    }
    cout << "STUDENT DATA: \n";
    for(int i=0; i< 3; i++){
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }
    int  sum=0;
    for(int i=0 ; i<3 ; i++){
        sum = sum + s[i].marks;
    }
    cout << "total marks of students " << sum << endl;
    */

    // USING NESTED STRUCTS:
    /*student s= {1,"rida", 45, {"pak", 34}};
    printStudent(s);
    cout <<  s.name << " " << s.roll << " " 
         << s.addr.city << " " << s.addr.code << endl;
    */

    // STRUCTURES WITH FUNCTIONS:
    /*
    // Pass by value:
    void print(Student st) { cout << st.name; }

    // Pass by reference
    void print(Student &st) { cout << st.name; }

    // Pass by pointer
    void print(Student *st) { cout << st->name; }
    */

    // USING POINTERS AS 2D ARRAYS STRUCTS WHEN PASSING FUNCTIONS:
    /*
    student a[2][2] = {
        { {1,"Rida"}, {2,"Sara"} },
        { {3,"Tony"}, {4,"Ali"} }
    };
    printStudents(a, 2);   // 'a' decays into pointer to its first row
    // we we pass a in function not &a because a is a 2d array and itself a pointer
    // if a is not an array we will do printStudents(&a,2)
    */


}