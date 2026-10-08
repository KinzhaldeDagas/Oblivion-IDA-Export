struct _RpcAssoc
{
list entry;
LONG refs;
LPSTR Protseq;
LPSTR NetworkAddr;
LPSTR Endpoint;
LPWSTR NetworkOptions;
ULONG assoc_group_id;
UUID http_uuid;
CRITICAL_SECTION cs;
list free_connection_pool;
LONG connection_cnt;
list context_handle_list;
};
