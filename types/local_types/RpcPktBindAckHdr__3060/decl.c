struct RpcPktBindAckHdr
{
RpcPktCommonHdr common;
unsigned __int16 max_tsize;
unsigned __int16 max_rsize;
unsigned int assoc_gid;
};
