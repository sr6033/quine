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

I started thinking of how this concept can be implemented in **C++** and then I came up with the following simple example. But the following concept is not exactly following the standards of QUINE, as it has an input mechanism. In the next example, I further used the concept of strings to make a pure QUINE program that takes no input and outputs the exact original code.

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

The below program doesn't use any input system and flushes out the exact same code. 

```C++
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string s = "#include<iostream>\n#include<fstream>\nusing namespace std;\n\nint main()\n{\tstring s = '#include<iostream>\\n#include<fstream>\\nusing namespace std;\\n\\nint main()\\n{\\tcout << s << endl;\\n\\treturn 0;\\n}';\n\tcout << s << endl;\n\treturn 0;\n}";  
    cout << s << endl;
    return 0;
}
```