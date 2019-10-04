#include <stdio.h>
#include <stdlib.h>


int main( int argc, char *argv[] )  {

   if(argc == 4 ){  // check to make sure that there are 4 arguments 

		char operator = *argv[1]; // the * converts pointer val to real var  

		double num1 = atof(argv[2]);  // strings need to be poitning to a pointer array 
		double num2 = atof(argv[3]);  

		printf("\n%f", num1);  // printing out the values 
		printf("%c", operator);
		printf("%f\n", num2);

		double answer = 0;  // declaring answer as a double 


		if(operator == '+'){      // checking that operator is plus
			answer = num1+num2;   // adds it and puts it into answer variable
			printf(" = %f\n",answer);  // prints the answer 

		}
		else if(operator == '-'){  // checking that operator is minus
			answer = num1-num2;    // subtracts it and puts it into answer variable
			printf(" = %f\n",answer);  // prints the answer 

		}
		else if(operator == 'x'){  // checking that operator is times
			answer = num1*num2;    // muliplies it and puts it into answer variable
			printf(" = %f\n",answer);  // prints the answer 

		}
		else if(operator == '/'){  // checking that operator is divide
			answer = num1/num2;    // divides it and puts it into answer variable
			printf(" = %f\n",answer);  // prints the answer 

		}
		else{
			printf("Invalid operator\n");  // prints if operator isnt one of the 4 classified
		}
		

	} else {  // if there aren't 4 arguments tell the user that they are doing it wrong
		printf("Invalid arguments"); 


	}
}