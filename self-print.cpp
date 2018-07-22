// A simple quine program using C++ 

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string line;
  	ifstream file ("self-print.cpp");
  	if (file.is_open())
  	{
    	while ( getline (file,line) )
    	{
      		cout << line << '\n';
    	}
    	file.close();
  	}

  	else cout << "Unable to open file";
  	return 0;
}