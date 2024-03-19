#include <stdio.h>
#include <string.h>
#define MAX(x, y) ((x) > (y)) ? (x) : (y)
#define MAX3(x, y, z) MAX(MAX((x), (y)), (z))

struct student
{
	char name[20];
	int rno;
	char addr[50];
}s[20];

void prime(int n)
{
    int i, counter = 0;
    if (n != 0 && n != 1)
    {
        for (i = 2; i <= n; i++)
        {
            if (n % i == 0)
                counter++;
        }

        if (counter < 2)
            printf("%d is Prime Number.", n);
        else
            printf("%d isn't Prime Number.", n);
    }
    else
        printf("The entered %d is not prime nor composite number.", n);
}

int main()
{
    int ch;
    int n, i, j;
    int number, counter = 0;
    int a, b, c;
    int num[10], *ptr;
    char str[20];
    int vcnt=0; 

    printf("\nSelect one of them: \n");
    printf("\n1.To Print Star Pattern.");                        // array
    printf("\n2.Check Number Is Prime Number Or Not.");          // function
    printf("\n3.Max Of 3 Number By Using Macro.");               // macro
    printf("\n4.To Accept Number And Display Reverse Of Its.");  // pointer
    printf("\n5.To Count No. of Vowels, Consonants and Words."); // string
    printf("\n6.To Accept Student records and Display it.");     // structure
    printf("\n\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        // code for star pattern print
        printf("Enter number of Rows: ");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;

    case 2:
        // code for prime number
        printf("Enter number: ");
        scanf("%d", &n);
        prime(n);
        break;

    case 3:
        // Code for maximum no using nested macro
        printf("\nEnter 3 Numbers: ");
        scanf("%d %d %d", &a, &b, &c);

        printf("Maximum of 3 Numbers: %d", MAX3(a, b, c));
        break;

    case 4:
        // code for reverse using pointer
        printf("\nEnter the size of array: ");
        scanf("%d", &n);
        printf("\nEnter the array: ");
        for (i = 0; i < n; i++)
            scanf("%d", &num[i]);
        ptr = num;
        printf("\nThe given array in reverse order is: ");
        for (i = n - 1; i >= 0; i--)
            printf("%3d", ptr[i]);
        break;

    case 5:
        // code for count vowels in given word
	printf("\nEnter a word : "); 
	scanf("%s",str); 
	for(i=0;str[i]!='\0';i++)
	{

		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		vcnt++;
	}
	printf("\nNumber of vowels in given string are : %d ",vcnt); 
    break;
    
    case 6:
    
	printf("How many student records you want to enter?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter name:");
		scanf("%s",s[i].name);
		printf("Enter roll no:");
		fflush(stdin);
		scanf("%d",&s[i].rno);
		printf("Enter address:");
		scanf("%s",s[i].addr);
	}
    printf("\nThe student details are:");
	for(i=0;i<n;i++)
	{
		printf("\nRollno %d is %s and has live in %s.",s[i].rno,s[i].name,s[i].addr);
	}
    break;

    default:
    printf("please..! Enter valid Choice number.");
    }

    printf("\n\nThank you...!");
}