#include <open.mp>

#include "engine/bootstrap/bootstrap.inc"

main() {}

public OnGameModeInit()
{
    return Engine_Init();
}

public OnGameModeExit()
{
    return Engine_Shutdown();
}