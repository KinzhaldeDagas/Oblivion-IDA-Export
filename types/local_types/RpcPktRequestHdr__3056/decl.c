struct RpcPktRequestHdr
{
RpcPktCommonHdr common;
unsigned int alloc_hint;
unsigned __int16 context_id;
unsigned __int16 opnum;
};
