#include <stdio.h>
#include <ctype.h>
#define RESET "\x1B[0m"
#define YELLOW "\x1B[33m"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define CYAN "\x1B[36m"
#define BLUE "\x1B[34m"

int main () {
	char fever,headache,nausea,breath,tired,choice;
	int count=0 ;
	// declaring variables for question and count of yes answeres questions // 

	printf("\n\t" CYAN "*********" RESET " WELCOME TO VIRTUAL DIAGNOSER " CYAN "*********" RESET "\n\n");
	// a welcome statement that greets the user //
	//
	printf("\tNOTE:for each of the following questions please\n");
	printf("\tanswer using Y for yes and N for no\n\n");
	// quick instructions on how to use the program //

	printf("\t" CYAN "******************" RESET  " QUESTIONS " CYAN "*******************" RESET "\n\n");
	
	while(1){
		// question one //
		printf("\t1. Do you have a fever?  Y/N\n ");
		printf("\tAnwser : ");
		scanf("%c",&fever);
		// print and scan statement to get an input from the user //
	
		fever = toupper(fever);
		// a function that captilizes the input from user //

        	while (fever != 'Y' && fever != 'N')
                	{
                	printf("\tplease re-enter your answer: ");
                	scanf(" %c",&fever);
			fever = toupper(fever);
                	}
		// an while loop in case user enter the wrong value //

		if (fever == 'Y')
			count = ++count;
		// increment to the count if the user answers yes to the question //

		printf("\t------------------------------------------------\n");
	
		// question two //
		printf("\t2. Are you experiencing a headache? Y/N \n");
		printf("\tAnswer: ");
        	scanf(" %c",&headache);

		headache = toupper(headache);


        	while (headache != 'Y' && headache  != 'N')
                	{
                	printf("\tplease re-enter your answer: ");
                	scanf(" %c",&headache);
			headache = toupper(headache);
                	}


			if (headache == 'Y')
                		count = ++count;


		printf("\t------------------------------------------------\n");
	
		// question three 
		printf("\t3. Do you have a nausea? Y/N\n");
		printf("\tAnswer: ");
        	scanf(" %c",&nausea);

		nausea  = toupper(nausea);


        	while (nausea != 'Y' && nausea != 'N')
                	{
                	printf("\tplease re-enter your answer: ");
                	scanf(" %c",&nausea);
			nausea = toupper(nausea);
                	}


        	if (nausea == 'Y')
                	count == ++count;


		printf("\t------------------------------------------------\n");
	
		// question four //
		printf("\t4. Do you feel shortness of breath \n\t   during easy tasks? Y/N \n");
		printf("\tAnswer: ");
		scanf(" %c",&breath);

		breath  = toupper(breath);


        	while (breath != 'Y' && breath != 'N')
                	{
                	printf("\tplease re-enter your answer: ");
                	scanf(" %c",&breath);
			breath = toupper(breath);
                	}


		if (breath == 'Y')
			count = ++count;


		printf("\t------------------------------------------------\n");
	
		// question five //
		printf("\t5. Are you feeling tired? Y/N \n");
		printf("\tAnswer: ");
		scanf(" %c",&tired);

		tired = toupper(tired);


        	while (tired != 'Y' && tired != 'N')
                	{
                	printf("\tplease re-enter your answer: ");
                	scanf(" %c",&tired);
			tired = toupper(tired);
	       		}
	

		if (tired  == 'Y')
			count = ++count;

 		printf("\t------------------------------------------------\n\n");

		printf("\t" BLUE "******************" RESET" DIAGNOSIS " BLUE "*******************" RESET "\n\n");
	
		if (count <= 2)
			printf("\t   Number of questions answered yes = "GREEN" %d/5" RESET "\n\n",count);
		else if (count <= 4)
			printf("\t   Number of questions answered yes = "YELLOW"%d/5" RESET "\n\n",count);
		else 
			printf("\t   Number of questions answered yes = "RED"%d/5" RESET "\n\n",count);
		// print statement showing numeber questions answered yes //
	
		printf("\t" CYAN "SYMPTOMS:" RESET "\n\n");

		if( fever == 'Y')
			printf("\t\t-FEVER\n");
		if( headache == 'Y')
			printf("\t\t-HEADACHE\n");
		if( nausea == 'Y')
			printf("\t\t-NAUSEA\n");
		if( breath == 'Y')
			printf("\t\t-SHORTNESS OF BREATH\n");
		if( tired == 'Y')
			printf("\t\t-FATIGUE\n");
		if (count == 0)
			printf("\t\t" GREEN "-NO SYMPTOMS" RESET "\n");
		// if statements showing of patient //
	
		printf("\n\t" CYAN "LIKELY AILEMENT:" RESET "\n\n");
		if ( count == 0 )
			printf("\t\t" GREEN "-NO AILEMENT" RESET "\n");
		else if ( fever == 'Y' && count <= 2)
			printf("\t\t" RED "-SEASONAL FEVER" RESET "\n");
		else if ( fever == 'Y' && count == 3)
			printf("\t\t" RED "-DENGUE FEVER" RESET "\n");
		else if ( breath == 'Y' && count == 4 )
			printf("\t\t" RED "-PNEUMONIA" RESET "\n");
		else 
			printf("\t\t" RED "-MALARIA" RESET "\n");
		

		printf("\n\t" CYAN "RECOMMENDATION:" RESET "\n\n");

		if (count == 0)
			printf("\t" GREEN "Your completly fine, please continue with your day" RESET "\n\n");
		else if (count <= 2)
			printf("\t" GREEN "   Have some rest you'll be fine <3" RESET "\n\n");
		else if  (count <= 3)
			printf("\t" YELLOW "   Have some rest but do visit the  doctor\n\t   when you feel better" RESET "\n\n");
		else 
			printf("\t" RED "   Visit the doctor IMMEDIATELY!!!!!!" RESET "\n\n");

		printf("\tIf you want another diagonosis please enter anything\n\t as input and if want to exit the program \n\tplease enter 'E'\n");
		printf("\tplease enter to continue or exit ; ");
		scanf(" %c",&choice);

		choice = toupper(choice);

		if (choice == 'E')
			break;
		else 
			continue;

	}

		// if else statements to give the user an diagnosis based number of yeses //

		printf("\t" CYAN "**************" RESET " THANKYOU FOR USING "CYAN"**************" RESET "\n\n");
		// a farewell message //


	printf("\t\t\t\t Made by Aarish Sajid :)\n ");


	return 0;

}


