struct user_thread_info_0
{
HANDLE server_queue;
DWORD wake_mask;
DWORD changed_mask;
WORD recursion_count;
WORD message_count;
WORD hook_call_depth;
WORD hook_unicode;
HHOOK hook;
UINT active_hooks;
DPI_AWARENESS_0 dpi_awareness;
INPUT_MESSAGE_SOURCE msg_source;
received_message_info *receive_info;
wm_char_mapping_data *wmchar_data;
DWORD GetMessageTimeVal;
DWORD GetMessagePosVal;
ULONG_PTR GetMessageExtraInfoVal;
user_key_state_info *key_state;
HKL kbd_layout;
DWORD kbd_layout_id;
HWND top_window;
HWND msg_window;
rawinput_thread_data_0 *rawinput;
};
