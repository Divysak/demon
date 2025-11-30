/*


#include <stdio.h>
struct student{
    char name[50];
    int age;
    unsigned long phone ;
};
int main(){
    struct student std;
    struct student *ptr;
    ptr=&std;
    printf("enter name:");
    fgets(ptr->name,sizeof(ptr->name),stdin);
    printf("enter age:");
    scanf("%d",&ptr->age);
    printf("enter phone no:");
    scanf("%lu",&ptr->phone);
    printf("student details:\n");
    printf("name:%s",ptr->name);
    printf("age:%d\n",ptr->age);
    printf("phone no:%lu\n",ptr->phone);
    return 0;
}

#include <stdio.h>
struct student{
    char name[50];
    int age;
    unsigned long phone;

};
int main(){
    struct student std;
    printf("enter name:");
    fgets(std.name,sizeof(std.name),stdin);
    printf("enter age:");
    scanf("%d",&std.age);
    printf("enter phone no:");
    scanf("%lu",&std.phone);
    printf("student details:\n");
    printf("name:%s",std.name);
    printf("age:%d\n",std.age);
    printf("phone no:%lu\n",std.phone);
    return 0;
} 

// same code with union
#include <stdio.h>
union student{
    char name[50];
    int age;
    unsigned long phone ;

};

int main(){
    union student std;
    printf("enter name:");
    fgets(std.name,sizeof(std.name),stdin);
    printf("enter age:");
    scanf("%d",&std.age);
    printf("enter phone no:"); 
    scanf("%lu",&std.phone);
    printf("student details:\n");
    printf("name:%s",std.name);
    printf("age:%d\n",std.age);
    printf("phone no:%lu\n",std.phone);
    return 0;
}*/

#include <stdio.h>
typedef struct point{
    int x;
    int y;
} point1, point2;
typede int(*fptr) (const void*, const void*);
int main(){
    typedef int integer;
    typedef char chararrray[100];
    fptr= functionpointer;;
    point point1={10,20};
    Integer num=100;
    character name ="array";


}