/*
String Left Rotation

Input:
gokul
2

Output:
kulgo
*/
#include<stdio.h>
#include<string.h>
void main(){
    char a[] = "gokul";
    int n = strlen(a);
    int i = 0 , k=0;
    char temp;
    int pos;
    printf("enter how many positions to rotate : ");
    scanf("%d",&pos);
    while (k<pos){
        temp = a[0];
        for(i = 0 ; i < n ; i++){
           a[i] = a[i+1];
        }a[n-1] = temp;

        k++;}
    printf("%s\n",a);
}
