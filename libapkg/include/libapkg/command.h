
namespace libapkg {
namespace command {

    struct ApkgCommand {
    };


    struct ApkgCommand *create_command(int argc, const char *arv[]);

    void ApkgCommand__execute_command(struct ApkgCommand *cmd);

    void ApkgCommand__free_command(void **cmdptr);
}
}


