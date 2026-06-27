#if defined _LOGGER_INCLUDED
    #endinput
#endif
#define _LOGGER_INCLUDED

stock Logger_Info(const message[])
{
    new text[144];

    format(text, sizeof(text), "[INFO] %s", message);

    print(text);

    return 1;
}