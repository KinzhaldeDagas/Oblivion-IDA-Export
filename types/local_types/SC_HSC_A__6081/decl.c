struct __declspec(align(8)) SC_HSC_A
{
PSP_FILE_CALLBACK_A msghandler __offset(OFF64|AUTO);
void *context __offset(OFF64|AUTO);
char cab_path[260];
char last_cab[260];
char most_recent_target[260];
};
