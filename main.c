#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sample;

	/* initialize variables! */
	sample = 12345;

	printf("Value of variable 'a': %d\n",sample);
	/* the address may be different from system to system */
	printf("Address of variable 'a': %p\n",&sample);
	/* integers typically occupy 4 bytes in modern systems */
	printf("Size of variable 'a': %lu\n",sizeof(sample));
	/* try modifying this code to change 'int' to a 'long'
	   see how the sizeof value changes */

    //*********************************************************//

    char a;
    char *ptr;

    //initialize variable//
    a = 'A';
    ptr = &a;

    printf("Valued of variable 'a' : %c\n",*ptr);
    printf("Address of variabe 'aQ : %p\n",ptr);


    //*********************************************************//

    int age;

    printf("Your age");

    /*the second argument is a memory location,
     the address of variable 'age' */
     scanf("%d",&age);
     printf("You claim to be %d years old\n",age);

    /*Or we can define pointer and then address of the age variable assign to pointer*/
    int *aptr;
    aptr = &age;

    printf("Your age: ");
    /*as an adress, the pointer is passed directly */
    scanf("%d",aptr);
    /*the astrisk operator is used to obtain the value
    referenced by the pointer, the value of variable 'age' */
    printf("You claim to be %d years old\n",*aptr);
    
    //*********************************************************//

    FILE *fp;

    fp = fopen("01_04-fopen1.c","r");
    /*always test the poşnter returned from a function*/
    if(fp == NULL) //when function fails, symbolic constant null is stored in the poinet.
    {
        /*exist upon function failure*/
        fprintf(stderr,"Unable to open file\n");
        exit(1);
    }
    puts("File opened");




    return 0;
}