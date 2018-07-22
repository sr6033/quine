#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string s = "#include<iostream>\n#include<fstream>\nusing namespace std;\n\nint main()\n{\tstring s = '#include<iostream>\\n#include<fstream>\\nusing namespace std;\\n\\nint main()\\n{\\tcout << s << endl;\\n\\treturn 0;\\n}';\n\tcout << s << endl;\n\treturn 0;\n}";  
    cout << s << endl;
  	return 0;
}