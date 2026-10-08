struct threaddata
{
list entry;
CRITICAL_SECTION cs;
DWORD thread_id;
RpcConnection *connection;
RpcBinding *server_binding;
context_handle_list *context_handle_list;
};
