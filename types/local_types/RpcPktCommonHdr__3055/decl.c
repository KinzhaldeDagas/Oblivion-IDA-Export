struct RpcPktCommonHdr
{
unsigned __int8 rpc_ver;
unsigned __int8 rpc_ver_minor;
unsigned __int8 ptype;
unsigned __int8 flags;
unsigned __int8 drep[4];
unsigned __int16 frag_len;
unsigned __int16 auth_len;
unsigned int call_id;
};
