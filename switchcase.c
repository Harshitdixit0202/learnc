#include<stdio.h>
int main()
{
    int day;
    printf("Enter the number to check the Day: ");
scanf("%d", &day);

switch (day)
{
case 1:
    printf("The day is Monday");
    break;
case 2:
printf("The Day is Tuesday:");
break;

case 3: 
printf("The Day is Wednesday: ");
break;

case 4: 
printf("The Day is Thursday: ");
break;

case 5: 
printf("The Day is Friday: ");
break;

case 6: 
printf("The Day is Satuarday: ");
break;

case 7: 
printf("The Day is Sunday: ");
break;

default:
printf("You have entered an incorrect Number days are only 1-7\n Thank you!");
break;
    
}
return 0;


}