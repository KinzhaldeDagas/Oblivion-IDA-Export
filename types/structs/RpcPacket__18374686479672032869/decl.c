struct __declspec(align(8)) _RpcPacket
{
_RpcConnection *conn;
RpcPktHdr *hdr;
RPC_MESSAGE *msg;
unsigned __int8 *auth_data;
ULONG auth_length;
};
