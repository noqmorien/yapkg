#include <libapkg/command.h>
#include <cstdlib>
#include <iostream>


namespace libapkg {
namespace command {

struct ApkgCommand *create_command(int argc, const char *argv[]) 
{
    struct ApkgCommand *cmd = (ApkgCommand *)malloc(sizeof(ApkgCommand));
    return cmd;
}

void ApkgCommand__execute_command(struct ApkgCommand *cmd)
{
}

void ApkgCommand__free_command(void **cmdptr) 
{
    std::cout << "free command" << std::endl;
    if(cmdptr && *cmdptr)
    {
        free(*cmdptr);
        cmdptr = nullptr;
    }
}


}
}
