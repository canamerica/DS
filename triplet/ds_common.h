
#ifndef DS_COMMMON
#define DS_COMMMON

#include <string.h>
 #include <ctype.h>
 #include <malloc.h>		// malloc()等
 #include <limits.h>		// INT_MAX等
 #include <stdio.h>			// EOF(=^Z或F6),NULL
 #include <stdlib.h>		// atoi()
 #include <io.h>			// eof()
 #include <math.h>			// floor(),ceil(),abs()
 #include <process.h>		// exit()
 #include <iostream>		// cout,cin
 
using namespace std;
 // 函数结果状态代码
 #define OK 1
 #define ERROR 0
 #define INFEASIBLE -1
 // #define OVERFLOW -2 因为在math.h中已定义OVERFLOW的值为3,故去掉此行
 typedef int Status; // Status是函数的类型,其值是函数结果状态代码，如OK等
 

#endif