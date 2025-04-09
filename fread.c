//reading file from fread() function
#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};

//driver code
int main()
{
    struct student s;
    FILE *fp;
    //open file in binary read mode
    fp = fopen("G:\\file-handling\\file-handling7\\student.txt", "rb");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    //read data from file
    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        printf("Name: %s\n", s.name);
        printf("Roll No: %d\n", s.roll);
        printf("Marks: %.2f\n", s.marks);
    }
    //close file
    fclose(fp);
    //return success
    printf("File read successfully\n");

    return 0;
}