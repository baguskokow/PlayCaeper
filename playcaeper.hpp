/* #########################################
 *
 *      File: playcaeci.hpp
 *
 *      Author : Bagus Koko Wibawanto
 *
 * ########################################
 *
 * */

#include <iostream>
#include <cstring>
 

char indexOfAlphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

/* Index Of Alphabet
 * 0 = A, 1 = B, 2 = C, 3 = D, 4 = E
 * 5 = F, 6 = G, 7 = H, 8 = I, 9 = J
 * 10 = K, 11 = L, 12 = M, 13 = N, 14 = O
 * 15 = P, 16 = Q, 17 = R, 18 = S, 19 = T
 * 20 = U, 21 = V, 22 = W, 23 = X, 24 = Y
 * 25 = Z
*/ 

void convertFromLettersToIndexNumber(const char* words) {
	char temporaryWords[25];

	strcpy(temporaryWords, words);

	// Get count the number of indexes used
	int size;
	std::string s;
	for(int i = 0; i < 25; i++) {
		if(temporaryWords[i] != '\0') {
			size++;
			s += temporaryWords[i];
		} else {
			break;
		}
	}

	for(int i = 0; i < 26; i++) {
		for(int j = 0; j < size; j++) {
			if(temporaryWords[j] == indexOfAlphabet[i]) {
				//std::cout << "Pass\n";
				std::cout << "Dari Alphabet : " << indexOfAlphabet[i] << " ";
				std::cout << "Dari Inputan : " << temporaryWords[j] << "\n";
			} else {
				//std::cout << "Fail\n";
			}
		}
	}
	
	//std::cout << size;

}

void convertFromSentenceToWords(const char* sentences) {
	char temporarySentences[100];
	strcpy(temporarySentences, sentences);
	std::string words;
	
	int i = 0;
	int size = 0;

	while(temporarySentences[i] != '\0') {
		if(temporarySentences[i] != ' ') {
			//size++;
			words +=temporarySentences[i];
		} else {
			//std::cout << words << " " << sizeOfWords << "\n";
			convertFromLettersToIndexNumber(words.c_str());
			//std::cout << words << " = " << size << "\n";
			words.clear();
			//size = 0;
			break;
		}
		i++;
	}
	
	//std::cout << words << "\n";
}


int encrypt() {
	
}
