#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
	while (true) {
		string sentence;
		cout << "Enter a string or press Q th quit: ";
		getline(cin, sentence);
		if (sentence == "Q" || sentence == "q") {
			break;
			return 0;
		}
		else {
			cout << countWords(sentence) << endl;
		}
	}
}

int countWords(string str) {
	int wordCount = 0;
	bool isWord = false;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != ' ') {
			isWord = true;
		}
		else if (str[i] == ' ') {
			if (str[i - 1] != ' ') {
				wordCount++;
				isWord = false;
			}
		}
	}
	if (str.back() != ' ') {
		wordCount++;
	}
	return (wordCount);
}