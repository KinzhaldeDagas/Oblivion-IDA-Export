struct ioinfo
{
HANDLE handle __offset(OFF64|AUTO);
unsigned __int8 wxflag;
char lookahead[3];
int exflag;
CRITICAL_SECTION crit;
};
