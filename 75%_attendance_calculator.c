// Calculate 75% Attendance 

/*
To calculate how many days you need to be present for a period of 5 months (For Sem-1) to achieve a 75% attendance rate:

1. Determine the total number of days in 5 months. Assuming an average of 30 days per month:

   Total days in 5 months = 5 months * 30 days/month = 150 days

2. Calculate 75% of the total days to achieve a 75% attendance rate:

   \(0.75 \times 150 = 112.5\) days

Since you can't have a fraction of a day in attendance, you would typically round up to the nearest whole day. 
So, you need to be present for a minimum of **113 days** out of the 150 days in 5 months to achieve a 75% attendance rate. 
This means you can be absent for a maximum of 150 - 113 = 37 days during the 5-month period.
*/

#include <stdio.h>

int main() {
    int totalDays, presentDays;
    float attendancePercentage;

    // Input the total number of days and present days
    printf("Enter the total number of days: ");
    scanf("%d", &totalDays);

    printf("Enter the number of days the student is present: ");
    scanf("%d", &presentDays);

    // Calculate attendance percentage
    attendancePercentage = ((float)presentDays / totalDays) * 100;

    // Display the result
    printf("Attendance Percentage: %.2f%%\n", attendancePercentage);

    return 0;
}
