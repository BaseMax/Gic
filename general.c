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

Argument arguments_parse(int argc,char** argv)
{
	Argument argument;
	if(argc == 0)
	{
		argument.type = CommandHelp;
	}
	return argument;
}
