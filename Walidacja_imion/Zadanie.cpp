#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

bool(czy(string t, regex w)) {
	bool b;
	b = regex_match(t, w);
	return b;
}

void test1() {
	string text;
	regex wzorzec("[A-Z£¯Œ][a-z¹ê¿Ÿæñœ³ó]+");

	ifstream Dane("imiona.in");
	if (Dane.is_open()){
		while (Dane>>text){

		if(czy(text,wzorzec))cout<<text<<" "<<"OK"<<endl;
		}
	}
	else cout<<"Problem z plikiem"<<endl;
}

int main() { setlocale(LC_ALL,"");
test1();
return 0;
}
