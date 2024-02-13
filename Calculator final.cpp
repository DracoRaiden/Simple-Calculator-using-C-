/* Create a C++ program for a simple calculator that performs basic arthemetic operations such
as addition, subtraction, multiplication, and division. */

#include<iostream>
using namespace std;

//Create functions for addition, subtraction, multiplication, and division

int add(int a, int b)
{
	long c;
	c = a+b;
	return c;
}

int sub(int a, int b)
{
	long c;
	c = a-b;
	return c;
}

int multiply(int d, int f){
	
	long c;
	c = d*f;
	return c;
}

int divide(int d, int f){
	
	long c;
	c = d/f;
	return c;
}

//Start the main function to finally use the functions defined

int main(){
	
	char repeat = 'y';
	
	while(repeat == 'y'){
		
		system("cls");
	
	//Display greetings
	
	cout<<"Welcome to the Magic Calculator where you could choose one or do all at once! \n \n \n";
	
	//Declare the variable for the two integers
		
	int function;
	long a,b;
	
	
	cout<<"Please Enter the First Integer: ";
	cin>>a;
	cout<<"Please Enter the Second Integer: ";
	cin>>b;
		
	//Ask the user what they would like to use the magic calculator for

	cout<<"\n\nWhat would you like to perform: \n\n1. Addition \n2. Subtraction \n3. Multiplication\n"<<
	"4. Division\n5. All at once!!!\n\nPlease input a number that goes with your choice: ";
	cin>>function;
	
	//Now, use a switch statement to conduct the user's desired operation
	
	switch(function){
		
	case 1:		
	
		//Now, call the Addition function and display the Sum of the Integers

		cout<<"\n\nThe sum is equal to : "<< add(a,b)<<"\n\n";
	
	break;
	
	case 2:
	
		//Check if the first integer is greater than the second one or else display error
		
		if(a>b){
		
		//Now, call the Subtraction function and display the Difference of the two integers

		cout<<"\n\nThe difference is equal to : "<< sub(a,b)<<"\n\n";
	}
	else{
		cout<<"\n\n\t\t\t\t\t\tError!	The answer is in negative!\n\n"<<endl;
	}
	
	break;
	
	case 3:
		
		//Now, call the multiplication function and display the product of the two integers

		cout<<"\n\nThe product is equal to : "<< multiply(a,b)<<"\n\n";
		
	break;
	
	case 4:
	
		// The divident should be greater than 0 to avoid error else display error
		
		if(b>0){
		//Now, call the divide function and display the quotient in this division
	
	int quo = divide(a,b);
	
	if(quo == 0){

		cout<<"\n\nThe first number is smaller than the second number, Hence the Quotient is equal to 0!\n\n";
	}
	else{
	
		cout<<"\n\nThe quotient is equal to : "<< quo<<"\n\n";
}
	}
	
	else{
		cout<<"\n\n\t\t\t\t\t\tError!\n\n";
	}
	
	break;
	
	case 5:
	
		//Now, call the Addition function and display the Sum of the Integers

		cout<<"\n\nThe sum is equal to : "<< add(a,b)<<"\n\n";
	
		//Check if the first integer is greater than the second one or else display error

		if(a>b){
			
		//Now, call the Subtraction function and display the Difference of the two integers

		cout<<"The difference is equal to : "<< sub(a,b)<<"\n\n";
	}
	else{
		
		cout<<"Error! "<<sub(a,b)<<"	The answer is in negative!"<<"\n\n";
	}
		
		//Now, call the multiplication function and display the product of the two integers

		cout<<"The product is equal to : "<< multiply(a,b)<<"\n\n";
		
		// The divident should be greater than 0 to avoid error else display error

		if(b>0){
		
		//Now, call the divide function and display the quotient in this division
	int quo = divide(a,b);
	
	if(quo == 0){

		cout<<"The first number is smaller than the second number, Hence the Quotient is equal to 0!\n";
	}
	else{
	
		cout<<"The quotient is equal to : "<< quo<<"\n\n";
}
	}
	
	else{
		cout<<"Error!\n\n";
	}
	
	
}

cout<<"Do you want to perform another calculation?\n\ny for yes and n for no: ";
cin>>repeat;

}
	return 0;
}