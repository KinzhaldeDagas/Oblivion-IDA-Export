struct __unaligned __declspec(align(1)) RpcPktBindNAckHdr
{
RpcPktCommonHdr common;
unsigned __int16 reject_reason;
unsigned __int8 protocols_count;
$BD2F8BC60C69AD1C1190691D9C30E35E protocols[1];
};
