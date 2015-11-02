//TODO: ORGANISE!

//global variables and includes that I use in a lot of my projects
#pragma once

//string.c_str() to convert string to char*

//from http://stackoverflow.com/questions/295120/c-mark-as-deprecated
#ifdef __GNUC__
#define DEPRECATED(func) func __attribute__ ((deprecated))
#elif defined(_MSC_VER)
#define DEPRECATED(func) __declspec(deprecated) func
#else
#pragma message("WARNING: You need to implement DEPRECATED for this compiler")
#define DEPRECATED(func) func
#endif


//region (found from c#) implemented like this for c++ by visual studio. should be compatable with other compilers
//normal convention is for the comment at the end to include the name (to clarify nested regions), this does mean that callapsed regions have the name twice
#pragma region name of region 
	//code
#pragma endregion comment for code

//all the includes I tend to use, with comments as to what i use them for
#pragma region includes

#include <iostream>//cout, cin, string, endl, printf()
#include <fstream>//ofstream, ifstream
using std::cin;//from iostream
using std::cout;//from iostream
//using std::endl;//from iostream - i use "\n"
using std::ofstream;//from fstream or iostram or string
using std::ifstream;//from fstream or iostram or string

#include <conio.h>//_kbhit() - shame that this is windows only, need to find/make multi-platform alternative

#include <string>//std::string, ofstram, ifstream, getline, endl
using std::getline;//from string
using std::string;//from string
//#include <stdlib.h>//NULL - useless if i define my own, anything else in here useful?
//#include <stdio.h>//printf() which is also given in iostream
//#include <math.h>
//#include <time.h>//time()
//#include <random>//rand() generate a random number, usage: int var = rand() % 100 //range = 0-99 (I have made a wrapper method for this in my maths class)

#pragma endregion includes

//constants that I use
#pragma region constants

//because I tend to change bools alot
static const bool f  = false;
static const bool t  = true;

static const bool NA_GLOBAL_DEBUG = t;
#ifndef NULL
	static const void NULL = 0;//equal to stdlib NULL
#endif



#pragma endregion constants