struct __declspec(align(8)) str_strtod_scanf_ctx
{
pthreadlocinfo_1 locinfo __offset(OFF64|AUTO);
const char *file __offset(OFF64|AUTO);
int length;
int read;
int cur;
int unget;
BOOL err;
};
