
/*
Lottery Number Checker ina numbered string

Problem:
Check whether the entered lottery number contains all digits
from 0 to 9 at least once.

Example:
Input  : 1234567890
Output : Lottery Won

Input  : 123456789
Output : Lottery Lost

Approach:
1. Read the lottery number as a string.
2. Traverse each digit in the string.
3. Mark the corresponding digit (0-9) as present.
4. After traversal, check whether all digits are present.
5. If all digits exist, print "Lottery Won".
   Otherwise, print "Lottery Lost".
*/
#include<stdio.h>
void main(){
int i = 0, n;
short int d0=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0;
char a[50];
printf("Enter lottery number: ");
scanf("%s", a);
    while(a[i]!='\0'){
         n=a[i]-48;// Convert character digit to integer
            switch(n){   // Mark the digit as found   
                case 0: d0=1; break;
                case 1: d1=1; break;
                case 2: d2=1; break;
                case 3: d3=1; break;
                case 4: d4=1; break;
                case 5: d5=1; break;
                case 6: d6=1; break;
                case 7: d7=1; break;
                case 8: d8=1; break;
                case 9: d9=1; break;
        }
        i++;
    }
     if(d0 && d1 && d2 && d3 && d4 &&  // Check if all digits from 0 to 9 are present
       d5 && d6 && d7 && d8 && d9)
        printf("Lottery Won");
    else
        printf("Lottery Lost");
}
