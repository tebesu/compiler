#include <iostream>
using namespace std;
extern int yyparse();

int main(int argc, char **argv)
{
    yyparse();
	cout << programBlock << endl;
    return 0;
}