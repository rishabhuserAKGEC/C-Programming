/*

Enumeration (or enum) is a user defined data type in C. It is mainly used to assign names to integral constants, the names make a program easy to read and maintain.

#include <stdio.h>

//Declaration
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
int main()
{
//Create a Enum Variable:- Do you remember struture variable creation, something like that 

enum week day;
day = Wed;
printf("%d", day); 
//Here you can see that it is printed as int. Because C alrady initialize the enum elements staring from 2
return 0;
}

Q1: What will be the output of above program?
Q2: Can we start with a different seed value?
Q3: Write a program which uses enums to represent days of the week and perform actions based day of a week, for example on Monday the action is print "Today is Monday", On Tuesday the action is print "Let's have some fun on next Tuesday" etc.
*/

/*
Answer 1: The output of the above program will be '2'.

Answer 2: Yes, we can start with a different seed value for the enum constants. For example:
enum week (Mon = 1, Tue, Wed, Thur, Fri, Sat, Sun};
Here, Mon will have the value 1, and the rest enums value will be assigned sequential values.
*/

//Answer 3:
#include <stdio.h>
enum week {Mon, Tue, Wed, Thur, Fri, Sat, Sun};
void performAction(enum week day)
{
switch (day)
{
case Mon:
printf("Today is Monday\n");
break;
case Tue:
printf("Let's have some fun on next Tuesday\n");
break;
default:
printf("Invalid day\n");
break;
}
}
int main()
{
enum week day = Mon;
performAction(day);
return 0;
}
