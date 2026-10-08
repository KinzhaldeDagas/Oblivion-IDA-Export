struct RpcPktResponseHdr
{
RpcPktCommonHdr common;
unsigned int alloc_hint;
unsigned __int16 context_id;
unsigned __int8 cancel_count;
unsigned __int8 reserved;
};
