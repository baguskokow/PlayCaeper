/* #########################################
 *
 *      File: test.cpp
 *
 *      Author : Bagus Koko Wibawanto
 *
 * ########################################
 *
 * */

#include <iostream>
#include <cstring>

int main() {
	const char* say = "Haloo Guyss";
	char arr[100];

	strcpy(arr, say);


	char separator = ' ';
	
	std::string s;
	int i = 0;
	while(arr[i] != '\0') {
		if(arr[i] != separator) {
			s +=arr[i];
		} else {
			std::cout << s << "\n";
			s.clear();
		}
		i++;
	}

	int x = 27;
	
	std::cout << x % 26; 

	return 0;
}
