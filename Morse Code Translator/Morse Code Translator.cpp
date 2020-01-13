
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	const char letters[37] = { ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', };
	const string morseLetters[37] = { "       ", ". ___", "___ . . .", "___ . ___ .", "___ . .", ".", ". . ___ .", "___ ___ .", ". . . .", ". .", ". ___ ___ ___", "___ . ___", ". ___ . .",  "___ ___", "___ .", "___ ___ ___", ". ___ ___ .", "___ ___ . ___", ". ___ .", ". . .", "_", ". . ___", ". . . ___", ". ___ ___", "___ . . ___", "___ . ___ ___", "___ ___ . .", ". ___ ___ ___ ___", ". . ___ ___ ___", ". . . ___ ___", ". . . . ___", ". . . . .", "___ . . . .", "___ ___ . . .", "___ ___ ___ . .", "___ ___ ___ ___ .", "___ ___ ___ ___ ___" };
	
	const char punct[18] = { '.', ',', '?', '!', ':', ';', '-', '(', ')', '[', ']', '*', '&', '^', '#', '/', '-', };
	const string morsepunct[18] = { "",  "",  "",  "",  "",  "",  "",  "",  "",  "",  "",  "",  "",  "",  "", };
	string textToChange = "";
	string newText = "";
	cout << "Enter what you want to translate to Morse code:" << endl;
	getline(cin, textToChange);
	transform(textToChange.begin(), textToChange.end(), textToChange.begin(), ::tolower);

	for (unsigned int t = 0; t < textToChange.size(); t++) {
		for (unsigned short k = 0; k< 37; k++) {
			if (textToChange[t] == letters[k]) {
				newText += morseLetters[k];
				newText += "   ";
				break;
			}
		}
	}

	cout << "There you go!" << endl << newText;
	
	//IF CODE DOES NOT WORK PLEASE REMOVE THE USE OF PRECOMPILED HEADERS

	system ("pause");
	return 0;
}