struct __declspec(align(8)) _RpcConnection_np
{
RpcConnection common;
HANDLE pipe;
HANDLE listen_event;
char *listen_pipe;
IO_STATUS_BLOCK io_status;
HANDLE event_cache;
BOOL read_closed;
};
