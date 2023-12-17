#include<iostream>
#include<string>
using namespace std;

int main()
{
	string first;//this is the original sentence 
	string second;//this string is already in the first sentence
	string third;//replace the second string with the third string

  //get the user input, line by line !!!
	getline(cin, first);
	getline(cin, second);
	getline(cin, third);
  //get the length of each input
	int one = first.length();
	int two = second.length();
	int three = third.length();
  
	int pos = 0;
  
	while (pos <= one - two)//to make sure that pos is updated, do not over count the previous one
	{
		int index = first.find(second, pos);// find the first word's position index
		if (index == -1)//no such word
		{
		    break;
		}
		first.replace(index, two, third);//replace it
		pos=index+three;//update the position
	}
	cout << first << endl;
	return 0;
}
