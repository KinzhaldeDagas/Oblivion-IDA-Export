struct _RPC_ASYNC_STATE
{
unsigned int Size;
ULONG Signature;
LONG Lock;
ULONG Flags;
void *StubInfo;
void *UserInfo;
void *RuntimeInfo;
RPC_ASYNC_EVENT Event;
RPC_NOTIFICATION_TYPES NotificationType;
RPC_ASYNC_NOTIFICATION_INFO u;
LONG_PTR Reserved[4];
};
