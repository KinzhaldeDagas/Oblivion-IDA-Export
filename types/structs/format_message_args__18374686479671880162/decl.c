struct format_message_args
{
int last;
ULONG_PTR *array __offset(OFF64|AUTO);
char **list __offset(OFF64|AUTO);
UINT64 arglist[102];
};
