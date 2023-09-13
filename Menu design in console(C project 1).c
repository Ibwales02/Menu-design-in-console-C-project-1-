#include<stdio.h>
#include<string.h>
int main(){
	
	char cmd[10];
	
	while (scanf ("%s", cmd) != EOF)
	{
		if(strcmp(cmd,"Exit")==0 || strcmp (cmd , "Quit")==0)
		{
			printf("Good bye!\n");
			break;
		}
		if(strcmp(cmd,"Insert")==0)
		{
			printf("Insert:\n");
		}
		if(strcmp(cmd,"List")==0)
		{
			printf("List:\n");
		}
		if(strcmp(cmd,"Find")==0)
		{
			printf("Find:\n");
		}
		if(strcmp(cmd,"Change")==0)
		{
			printf("Change:\n");
		}
		if(strcmp(cmd,"Delete")==0)
		{
			printf("Delete:\n");
		}
	
	}


	
	return 0;
}