#include <stdio.h>

/*
Students
Grades

We need a file to store and write too
CRUD
We want a Student Table: student_id, name, course_id
We want a Grades Table: grades, student_id, course_id
We want a Course Table: course, student_id

*/

int main(int argc, char const *argv[]) {
    /* code */

    int userChoice = 0;

    //grab first menu
        // access student 
            // create students
                // name
            // update students
                // name, course_id,
            // delete students
                // delte student by id
            // read students
                //student get grades, course
    
        // access courses
            // create course
                // set students_ids, course name,
            // read course
            // update course
            // delete course

        // access grades
            // get student_id, grades, and course_id

    // set grades in courses
    do {
        printf("Please Enter your choices: \n");
        printf("1 For Student \n");
        printf("2 For Administration ");
        printf("0 To exit");
        scanf("%d", &userChoice);;  
        switch (userChoice)
        {
        case 1:
            studentMenu();
            break;
        case 2:
            administrationMenu();
            break;
        case 0:
            printf('Exiting main menu');
            break;
        default:
            printf('Wrong selection. Exiting ');
            userChoice = 0;
            break;
        }
    }
    while (userChoice != 0);
    return 0;
}

void studentMenu() {

}

void admininstrationMenu() {

}

