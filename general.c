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
	if(argc == 1)
	{
		argument.type = CommandHelp;
	}
	else
	{
		for(int i=1;i<argc;i++)
		{
			if(i == 1)
			{
				if(strcmp(argv[i],"help") == 0)
				{
					argument.type=CommandHelp;
				}
				else if(strcmp(argv[i],"version") == 0)
				{
					argument.type=CommandVersion;
				}
				else if(strcmp(argv[i],"clone") == 0)
				{
					argument.type=CommandClone;
				}
				else
				{
					argument.type=CommandUnknown;
					argument.value=argv[i];
				}
			}
			else
			{
				puts(argv[i]);
			}
		}
	}
	return argument;
}
void help_init()
{
	puts("");
	puts(CONSOLE_GREEN "Git Control (" GIC_VERSION ")");
	puts("");
	puts("    Management the repositories easily in our directory.");
	puts("    Open-source <https://github.com/BaseMax/Gic>");
	puts(CONSOLE_RESET);
}
void help_commands()
{
	puts(CONSOLE_GREEN "    Usage: gic <command> [arguments]");
	puts("");
	puts(" These are commands :");
	puts("");
	puts(CONSOLE_YELLOW "  clone  " CONSOLE_MAGENTA "    Clone a repository into disk");
	puts(CONSOLE_YELLOW "  help   " CONSOLE_MAGENTA "    View the help text");
	puts(CONSOLE_YELLOW "  version" CONSOLE_MAGENTA "    Print the version of GIC");
	puts(CONSOLE_RESET);
}
