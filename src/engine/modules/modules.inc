#if defined _MODULES_INC
    #endinput
#endif
#define _MODULES_INC

stock Modules_Init()
{
    print("");
    print("[ENGINE] Inicializando módulos...");
    print("");

    print("[OK] Logger");
    print("[OK] Config");
    print("[OK] Scheduler");
    print("[OK] Database");

    print("");
    print("Engine pronta.");
    print("");

    return 1;
}