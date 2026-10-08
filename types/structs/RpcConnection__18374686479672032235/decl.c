struct _RpcConnection
{
LONG ref;
BOOL server;
HANDLE wait_release;
LPSTR NetworkAddr;
LPSTR Endpoint;
LPWSTR NetworkOptions;
const connection_ops *ops;
USHORT MaxTransmissionSize;
__declspec(align(8)) CtxtHandle ctx;
TimeStamp exp;
ULONG attr;
RpcAuthInfo *AuthInfo;
ULONG auth_context_id;
ULONG encryption_auth_len;
ULONG signature_auth_len;
RpcQualityOfService *QOS;
LPWSTR CookieAuth;
list conn_pool_entry;
ULONG assoc_group_id;
RPC_ASYNC_STATE *async_state;
_RpcAssoc *assoc;
RPC_SYNTAX_IDENTIFIER ActiveInterface;
USHORT NextCallId;
list protseq_entry;
_RpcServerProtseq *protseq;
_RpcBinding *server_binding;
};
