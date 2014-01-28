#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<string.h>
int main()
{
	time_t first,last;
	char ch,password[100];
	int i;
	system("cls");
	printf("\n\n\n\tEnter password to access the database ::\n\t");
	for(i=0;i<100;i++)
	{       ch=getch();
		if(i==0)
		time(&first);
		if(ch=='\r')
		{
			time(&last);
			password[i]='\0';
			if(!strcmp(&password[0],"Tejendra Singh"))
			{
				if(difftime(last,first)>1.5&&difftime(last,first)<3.50)
				{
				for(i=0;i<11;i++)
				{
					system("cls");
                    time(&first);
					printf("\n\n\t\t\tWelcome Tejendra Singh");
					printf("\n\n\t\t\t");
					puts(ctime(&first));
					printf("\n\n\t\t\tPlease wait for \n\n\t\t\t%d\n\n\t\t\tSeconds",10-i);
					if(i==10)
					printf("\n\n\t\t\tWelcome into the System.\n\t\t\tPress any key to continue ");
					delay(1000);
				}
				}
				else
				{printf("\n\n\t\tWelldone, But I think you are not supposed to enter the database"); getch(); main(); break;}
			}
			else
			{printf("\n\n\t\tSorry, Wrong Password"); getch(); main(); break;}
			break;
		}
		else
		{password[i]=ch; printf("%c",ch);}
		}
}
