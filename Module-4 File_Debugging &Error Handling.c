#include<stdio.h>
int main()
{
	char fdata[20];
	FILE *fptr;
	fptr=fopen("E:/C C++/Hello.txt","r");
	fscanf(fptr,"%s",&fdata);
	printf("%s",fdata);
	fclose(fptr);
}