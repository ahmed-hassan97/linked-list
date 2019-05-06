#include <stdio.h>
#include <stdlib.h>
typedef struct student{
int mark;
char name[20];
struct student *nextnode;
}std1;
int main()
{
        std1 ahmed={15,"ahmed",NULL};
        std1 yahia={21,"yahia",NULL};

        std1 mohamed={16,"mohamed",NULL};

        std1 hassan={17,"hassan",NULL};

        std1 farah={18,"farah",NULL};

        std1 zeinb={19,"zeinb",NULL};

        std1 fatma={20,"fatma",NULL};

        std1 khaled={21,"khaled",NULL};
        ahmed.nextnode=&yahia;
        yahia.nextnode=&mohamed;
        mohamed.nextnode=&hassan;
        hassan.nextnode=&farah;
        farah.nextnode=&zeinb;
        zeinb.nextnode=&fatma;
printelements(&ahmed);


    return 0;
}
void printelements(struct student *ptr){
while((ptr->nextnode)!=NULL){
printf("name = %s \t id = %d \n\n",(ptr->name),(ptr->mark));
ptr=ptr->nextnode;
}
}
