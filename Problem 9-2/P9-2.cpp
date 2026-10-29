#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
	string sentence;
	cout << "Enter a sentence: ";
	getline(cin, sentence);
	cout << countWords(sentence) << endl;;
	return 0;
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