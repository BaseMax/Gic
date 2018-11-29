#include "gic.h"

int main()
{
	puts(CONSOLE_GREEN "Git Control (" GIC_VERSION ")");
	puts("");
	puts("    Management the repositories easily in our directory.");
	puts("    Open-source <https://github.com/BaseMax/Gic>");
	puts("    Usage: gic <command> [arguments]");
	puts("");
	puts(" These are commands :");
	puts("");
	puts(CONSOLE_YELLOW "  clone  " CONSOLE_MAGENTA "    Clone a repository into disk");
	puts(CONSOLE_YELLOW "  help   " CONSOLE_MAGENTA "    View the help text");
	puts(CONSOLE_YELLOW "  version" CONSOLE_MAGENTA "    Print the version of GIC");
	puts(CONSOLE_RESET);

	return 0;
}
