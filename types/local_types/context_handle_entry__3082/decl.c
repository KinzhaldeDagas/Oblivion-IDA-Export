struct __declspec(align(8)) context_handle_entry
{
list entry;
DWORD magic;
RPC_BINDING_HANDLE handle;
ndr_context_handle_0 wire_data;
};
