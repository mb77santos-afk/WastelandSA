#include <open.mp>

#include "definitions/items.inc"
#include "core/core.inc"
#include "utils/logger.inc"

main()
{
    print("Servidor iniciado.");
}

public OnGameModeInit()
{
    WCore_Init();

    Logger_Info("Inicializando módulos...");

    return 1;
}