struct send_message_info
{
message_type type;
DWORD dest_tid;
HWND hwnd __offset(OFF64|AUTO);
UINT msg;
__declspec(align(8)) WPARAM_0 wparam;
LPARAM_0 lparam;
UINT flags;
UINT timeout;
SENDASYNCPROC callback __offset(OFF64|AUTO);
ULONG_PTR data;
wm_char_mapping wm_char;
};
