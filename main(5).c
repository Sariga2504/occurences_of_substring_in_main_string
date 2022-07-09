/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>//header file
#include <string.h>//header file for string inorder to use string function
 
char str1[100];//here data type is char and initialized with array name str1 and array size 100 for input 1
char str2[100];//data type is char and initialize with array name str2 and array size 100 for input 2
int count = 0, count1 = 0;//initially count and count1 are assigned as 0
 
void main()//it is function which returns null value
{
    int i, j, l, l1, l2;//data type is declared for the variable i,j,l,l1,l2
 
    printf("\nEnter a string 1: ");//displays the prompt message
    scanf("%[^\n]s", str1);//it gets a input as a sentence
 
    l1 = strlen(str1);//strlen is used to get the length of str1 and assigned for variable l1
 
    printf("\nEnter a string 2 : ");//displays the prompt message
    scanf(" %[^\n]s", str2);//get the second input sentence
 
    l2 = strlen(str2);//to find the length of str2 and assigned to l2 variable
 /*looping takes place (nested looping)in order to find the occeurence of input2 in input1*/
    for (i = 0; i < l1;)
    {
        j = 0;
        count = 0;
        while ((str1[i] == str2[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    printf("%s occurs %d times in %s", str2, count1, str1);
}
