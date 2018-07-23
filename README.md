		   _________          __       __        ________        ___      __        ________
		  /         \        |  |     |  |      |__    __|      |   \    |  |      |   _____|
		 |   _____   |       |  |     |  |         |  |         |    \   |  |      |  |
		 |  |     |  |       |  |     |  |         |  |         |  |\ \  |  |      |  |___
		 |  |     |  |       |  |     |  |         |  |         |  | \ \ |  |      |   ___|
		 |  |     |  |       |  |     |  |         |  |         |  |  \ \|  |      |  |
		 |   -----   |       |  |_____|  |       __|  |__       |  |   \    |      |  |_____
		  \_________  \      |___________|      |________|      |__|    \___|      |________|
		            \__\


### Quine is a self-replication computer program

The name "quine" was coined by Douglas Hofstadter, in his popular science book Gödel, Escher, Bach: An Eternal Golden Braid, in honor of philosopher Willard Van Orman Quine (1908–2000), who made an extensive study of indirect self-reference, and in particular for the following paradox-producing expression, known as Quine's paradox:

> "Yields falsehood when preceded by its quotation" yields falsehood when preceded by its quotation.

```C++
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
```