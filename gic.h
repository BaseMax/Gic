/**
*
* @Name : Gic
* @Version : 1.0
* @Programmer : Max
* @Date : 2018-11-29
* @Released under : https://github.com/BaseMax/Gic/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/Gic
*
**/
#ifndef GIC_LIB
#define GIC_LIB
#include <stdio.h>
//#include <unistd.h>
/*
 * General Value for GIC
 */
#define GIC_VERSION 		"0.1 beta"
#define GIC_VERSION_CODE	1
/*
 * Colorize the console text
 */
#define CONSOLE_RESET		"\x1b[0m"
#define CONSOLE_GREEN		"\x1b[32m"
#define CONSOLE_YELLOW		"\x1b[33m"
#define CONSOLE_RED			"\x1b[31m"
#define CONSOLE_BLUE		"\x1b[34m"
#define CONSOLE_CYAN		"\x1b[36m"
#define CONSOLE_MAGENTA		"\x1b[35m"

/*
 * Enum CommandType
 * Used in Parse the agument(s)
 */
typedef enum
{
	CommandHelp				= 0,
	CommandVersion			= 1,
	CommandClone			= 2,
} CommandType;
typedef struct
{
	//...
} CommandFlags;
typedef struct
{
	CommandType 	type;
	char* 			value;
	CommandFlags 	flags;
} Argument;

/*
 * Requirement , functions
 */
Argument arguments_parse(int argc,char** argv);

#endif
