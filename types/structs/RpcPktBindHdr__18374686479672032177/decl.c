struct RpcPktBindHdr
{
RpcPktCommonHdr common;
unsigned __int16 max_tsize;
unsigned __int16 max_rsize;
unsigned int assoc_gid;
unsigned __int8 num_elements;
unsigned __int8 padding[3];
};
