#include <stdlib.h>
#include <iostream>

#include <libapkg/libpkg.h>

using namespace libapkg::command;

int main(int argc, const char *argv[]) {
    ApkgCommand *cmd = create_command(argc, argv);
    // Execute commands
    ApkgCommand__execute_command(cmd);
    // Free the command after finish the application
    ApkgCommand__free_command((void **)&cmd);
    return 0;
}
