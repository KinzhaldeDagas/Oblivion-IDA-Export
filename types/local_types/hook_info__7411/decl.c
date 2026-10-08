struct hook_info
{
INT id;
void *proc __offset(OFF64|AUTO);
void *handle __offset(OFF64|AUTO);
DWORD pid;
DWORD tid;
BOOL prev_unicode;
BOOL next_unicode;
WCHAR_0 module[260];
};
