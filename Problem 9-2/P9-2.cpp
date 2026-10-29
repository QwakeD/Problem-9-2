#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
	string sentence;
	cout << "Enter a string or press Q to quit: ";
	getline(cin, sentence);
	cout << countWords(sentence) << endl;
}

int countWords(string str) {
	int wordCount = 0;
	bool isWord = false;
	if (str.length() == 0) {
		return (wordCount);
	}
	else {
		for (int i = 0; i < str.length(); i++) {
			if (str[i] != ' ') {
				isWord = true;
			}
			else if (str[i] == ' ') {
				if (i == 0) {

				}
				else {
					if (str[i - 1] != ' ') {
						wordCount++;
						isWord = false;
					}
				}
			}
		}
		if (str.back() != ' ') {
			wordCount++;
		}
		return (wordCount);
	}
}