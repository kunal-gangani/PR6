/*
Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
For example,
Input:
Enter your Desired String : nayan

The Above String is Palindrome.
*/
#include<stdio.h>
void main(){
	int i,len=0,sum=1;
	char alpha[50];
	printf("Enter your Desired String : ");
	gets(alpha);
	for(i=0;alpha[i]!=NULL;i++){
		len++;
	}
	for(i=0;i<len/2;i++){
		if(alpha[i]!=alpha[len-1-i]){
			sum=0;
		}
	}
	if(sum==1){
		printf("\nThe Above String is Palindrome.");
	}else{
		printf("\nThe Above String is not Palindrome");
	}
}
