#if defined _LOGGER_INC
    #endinput
#endif
#define _LOGGER_INC

stock Logger_Init()
{
    print("[OK] Logger");
    return 1;
}

stock Log_Info(const message[])
{
    new text[144];
    format(text, sizeof(text), "[INFO] %s", message);
    print(text);
    return 1;
}

stock Log_Warning(const message[])
{
    new text[144];
    format(text, sizeof(text), "[WARNING] %s", message);
    print(text);
    return 1;
}

stock Log_Error(const message[])
{
    new text[144];
    format(text, sizeof(text), "[ERROR] %s", message);
    print(text);
    return 1;
}