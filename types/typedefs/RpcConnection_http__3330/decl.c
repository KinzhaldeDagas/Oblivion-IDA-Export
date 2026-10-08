struct _RpcConnection_http
{
RpcConnection common;
HINTERNET app_info;
HINTERNET session;
HINTERNET in_request;
HINTERNET out_request;
WCHAR_0 *servername;
HANDLE timer_cancelled;
HANDLE cancel_event;
DWORD last_sent_time;
ULONG bytes_received;
ULONG flow_control_mark;
ULONG flow_control_increment;
UUID connection_uuid;
UUID in_pipe_uuid;
UUID out_pipe_uuid;
RpcHttpAsyncData *async_data;
};
