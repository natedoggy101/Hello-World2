#include <iostream> 
#include <vector> 
#include <cstdlib> 

using namespace std;

int Factorial(int n)
{
	if(n==0)
	{
		n=1;
	}
	else
	{
		n = n*Factorial(n-1);
	}
	return n;
}

int main()
{
	int userInput, i;
	cout << "Please input an integer: " << endl;
	cin >> userInput;
	//create a vector to store factorial numbers
	vector<int> vct(userInput+1);
	//print out the factorial of the user input
	cout << Factorial(userInput) << endl;
	//populate the vector with all the factorials less than 
	for(i=0; i<vct.size(); i++)
	{
		vct.at(i) = Factorial(i);
	}
	//to print out what is inside the initial vector
	/*for(i=0; i <vct.size(); i++)
	{
		cout << vct.at(i) << endl;
	}*/
	while(userInput!=0)
	{
		cout << "Please input an integer: (or '0' to quit) " << endl;
		cin >> userInput;
		//increase the size of the vector if the number is larger or equal to the
		//the elements in the vector
		if(userInput >= vct.size())
		{
			for(i=(vct.size()); i<=(userInput); i++)
			{				
				vct.push_back(Factorial(i));
			}
			cout << vct.at(userInput) << endl;
		}
		else
		{
			cout << vct.at(userInput) << endl;
		}
	}
	cout << "Goodbye" << endl;
}