struct ioinfo_0
{
HANDLE handle __offset(OFF64|AUTO);
unsigned __int8 wxflag;
char lookahead[3];
int exflag;
CRITICAL_SECTION crit;
__int8 textmode : 7;
__int8 unicode : 1;
char pipech2[2];
__declspec(align(8)) __int64 startpos;
BOOL utf8translations;
char dbcsBuffer;
BOOL dbcsBufferUsed;
};
