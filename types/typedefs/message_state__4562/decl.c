struct message_state
{
RPC_BINDING_HANDLE binding_handle;
ULONG prefix_data_len;
SChannelHookCallInfo_0 channel_hook_info;
BOOL bypass_rpcrt;
HWND target_hwnd;
DWORD target_tid;
dispatch_params params;
};
