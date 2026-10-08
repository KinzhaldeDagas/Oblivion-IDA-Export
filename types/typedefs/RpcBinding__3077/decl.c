struct _RpcBinding
{
LONG refs;
_RpcBinding *Next;
BOOL server;
UUID ObjectUuid;
LPSTR Protseq;
LPSTR NetworkAddr;
LPSTR Endpoint;
LPWSTR NetworkOptions;
RPC_BLOCKING_FN BlockingFn;
ULONG ServerTid;
RpcConnection *FromConn;
_RpcAssoc *Assoc;
RpcAuthInfo *AuthInfo;
RpcQualityOfService *QOS;
LPWSTR CookieAuth;
};
