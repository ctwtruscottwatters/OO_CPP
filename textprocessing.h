#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>
// Charles Thomas Wallace Truscott Watters for github.com/ctwtruscottwatters
// Learning C++ OO instead of Python OO where I started
// One day I'm going to be fluent and advanced in C++ hopefully

typedef struct string_copy {
	char* copies[2]{};
} string_copy;
class TextProcessing
{
private:
	char* string_one;
	char* string_two;


public:
	TextProcessing(char * string_one_val, char * string_two_val) {
		string_one = string_one_val;
		string_two = string_two_val;
		string_length_of_parameters = strlen(string_one_val) + strlen(string_two_val);
	}
	uint64_t string_length_of_parameters;
	char * c1;
	char * c2;
	string_copy hold_copies;
	char** holding_copies;
	void copy_of_string(char * copy_one, char * copy_two) {
		hold_copies.copies[0] = (char*)copy_one;
		hold_copies.copies[1] = (char*)copy_two;
		holding_copies = &hold_copies.copies[0];
	}
	long long int string_length(char * copy_of_text) {
		char* test = (char *) copy_of_text;
		return strlen(test);

	}
	char* print_string(char * printed_text) {
		std::cout << "The text is:\t" << printed_text << std::endl;
	}
	uint64_t print_the_length(void) {
		return string_length_of_parameters;
	}
};
