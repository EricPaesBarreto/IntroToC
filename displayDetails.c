#include <stdio.h>

void print_details(int student_id, char *full_name, int YOB, char *course) {
    printf("ID:\t%d\nName:\t%s\nAge:\t%d\nCourse:\t%s\n", student_id, full_name, 2026-YOB, course);
}

int main(){
    print_details(239289, "Eric Paes Barreto", 2005, "Computer Science");
    return 0;
}
