#if defined _BOOTSTRAP_INC
    #endinput
#endif
#define _BOOTSTRAP_INC

#include "engine/modules/modules.inc"

stock Engine_Init()
{
    print("");
    print("========================================");
    print("      Wasteland SA");
    print("      Version 0.1.0-dev");
    print("========================================");

    Modules_Init();

    return 1;
}

stock Engine_Shutdown()
{
    print("");
    print("========================================");
    print("Encerrando Wasteland SA...");
    print("========================================");
    print("");

    return 1;
}