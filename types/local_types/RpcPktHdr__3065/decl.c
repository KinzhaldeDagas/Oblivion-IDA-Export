union RpcPktHdr
{
RpcPktCommonHdr common;
RpcPktRequestHdr request;
RpcPktResponseHdr response;
RpcPktFaultHdr fault;
RpcPktBindHdr bind;
RpcPktBindAckHdr bind_ack;
RpcPktBindNAckHdr bind_nack;
RpcPktHttpHdr http;
RpcPktAuth3Hdr auth3;
};
