struct _RpcHttpAsyncData
{
LONG refs;
HANDLE completion_event;
WORD async_result;
INTERNET_BUFFERSW inet_buffers;
CRITICAL_SECTION cs;
};
