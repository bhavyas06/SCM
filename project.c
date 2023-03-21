#include <stdio.h>

int menu()
{
	int num;
	int a,b;
	
	printf ("---------------MENU---------------\n");
	printf ("1.ADDITION    2.SUBTRACTION\n3.MULTIPLICATION    4.DIVISION\n5.EXIT\n");
	printf ("\nENter your choice: ");
	scanf ("%d", &num);

	switch(num)
	{
		case 1:
		{
			printf ("Enter two numbers: ");
			scanf ("%d %d", &a,&b);
			printf ("SUM = %d\n", a+b);
			menu();
			break;
		}
		
		case 2:
		{
			printf ("Enter two numbers: ");
			scanf ("%d %d", &a,&b);
			printf ("DIFFERENCE = %d\n", a-b);
			menu();
			break;
		}
		case 3:
		{
			printf("Enter two numbers: "):
			scanf("%d %d",&a,&b);
			printf("PRODUCT = %d\n",a*b);
			menu();
			break;
		}
        case 4:
        {
            printf ("Enter two numbers: ");
            scanf ("%d%d", &a, &b);
            printf ("Quotient = %d\n\n", a/b);
            menu();
            break;
        }
        case 0:
        {
            printf ("Exit\n\n");
            break;
        }
        default:
        {
            printf ("Invalid Option\nEnter again\n\n");
            menu();
            break;


	}  
	return 0; 
}



int main()
{
	menu();
	return 0;
}