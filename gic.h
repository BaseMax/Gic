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
#include <stdlib.h>
#include <string.h>
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
	CommandUndefined		= -2,
	CommandUnknown			= -1,
	CommandHelp				= 0,
	CommandVersion			= 1,
	CommandCheck			= 2,
	CommandClone			= 3,
} CommandType;
typedef enum
{
	False					= 0,
	True					= 1,
} Bool;
typedef struct
{
	Bool installed;
} GitConfig;
typedef struct
{
	//...
} CommandFlags;
typedef struct
{
	CommandType 	type;
	char* 			value;
	size_t			size;//Size of the value for memory manager
	CommandFlags 	flags;
} Argument;

/*
 * Requirement , functions
 */
void argument_init(Argument* argument);
//Argument arguments_parse(int argc,char** argv);
void arguments_parse(Argument* argument,int argc,char** argv);
void argument_unknown(Argument* argument);
void help_init();
void help_commands();
Bool git_checks();
void git_check(GitConfig* config);
void git_error(GitConfig* config);
void clone_error();
void clone_empty();
void error_show(const char* message);

#endif
