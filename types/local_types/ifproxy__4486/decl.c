struct ifproxy
{
list entry;
proxy_manager *parent;
void *iface;
STDOBJREF stdobjref;
IID iid;
IRpcProxyBuffer_0 *proxy;
ULONG refs;
IRpcChannelBuffer_0 *chan;
};
