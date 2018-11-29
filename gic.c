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
#include "gic.h"

int main(int argc,char** argv)
{
	Argument argument = arguments_parse(argc,argv);
	if(argument.type == CommandHelp)
	{
		help_init();
		help_commands();
	}
	else if(argument.type == CommandVersion)
	{
		help_init();
	}
	else if(argument.type == CommandClone)
	{
		puts("...");
	}
	return 0;
}
