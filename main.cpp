/* #########################################
 *
 *      File: main.cpp
 *
 *      Author : Bagus Koko Wibawanto
 *
 * ########################################
 *
 * */

#include "include/playcaeper.hpp"

int main() {
	const char* sentences = "AKU MAU MAKAN AYAM";
	
	//std::cout << convertFromSentenceToWords("AKU MAU MAKAN AYAM", size);
	convertFromSentenceToWords("AYAM GORENG");

	// Debug
	std::cout << "Result : " << lettersAfterEncryption << " \n";

	return 0;
}
