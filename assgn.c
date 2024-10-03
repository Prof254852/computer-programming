#include<stdio.h>

int main () {
int book_ id;
int due_day,due_month,due_year;
int return_day, return_month,return_year;

//input for book of
printf ("enter book of");
scanf("%d", book of);

//input for due date
printf ("11_11_2023");
scanf("%d%d%d");
//input for return date
printf("18_11_2023"):
scanf("%d%d%d");
//calculate the number of overdue days
if(returnyear>dueyear||(returnyear==dueyear&&returnmonth>duemonth)||(returnyear==dueyear&&returnmonth==duemonth&&returnday>dueday)) {
if(returnyear==dueyear && returnmonth==duemonth) {
overdueday=returnday-dueday;
}else if (returnyear==dueyear) {
//let's say the due date is at the end of the month(30days)
overduedays= (30-dueday+returnday);
} else {
//more comprehensive llogic required.
overduedays = 30;
}
}
//determine fine based on overdue days
if(overduedays>0 && overduedays <=7)  {
fineamount=20;
} else if (overduedays >7 && overduedays  <=14) {
fineamount= 50;
} else if ( overdue days >14) {
fine amount = 100;
}
//display results 
printf("\nbookid:%d\n",bookid);
printed("duedate: %02d/%02d%/04d\n", dueday,duemonth,dueyear);
printf("returndate:%02d,/%02d/%02d/%04d\n"returnday, returnmonth, returnyear);
printf("days overdue:%d\n"overduedays);
printf("funerate:ksh%d\n,"fineamount);

return 0;
}