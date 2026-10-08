struct _RpcConnection_tcp
{
RpcConnection common;
int sock;
HANDLE sock_event;
HANDLE cancel_event;
};
