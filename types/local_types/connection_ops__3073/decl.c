struct connection_ops
{
const char *name __offset(OFF64|AUTO);
unsigned __int8 epm_protocols[2];
RpcConnection *(*alloc)(void) __offset(OFF64|AUTO);
RPC_STATUS (*open_connection_client)(RpcConnection *) __offset(OFF64|AUTO);
RPC_STATUS (*handoff)(RpcConnection *, RpcConnection *) __offset(OFF64|AUTO);
int (*read)(RpcConnection *, void *, unsigned int) __offset(OFF64|AUTO);
int (*write)(RpcConnection *, const void *, unsigned int) __offset(OFF64|AUTO);
int (*close)(RpcConnection *) __offset(OFF64|AUTO);
void (*close_read)(RpcConnection *) __offset(OFF64|AUTO);
void (*cancel_call)(RpcConnection *) __offset(OFF64|AUTO);
RPC_STATUS (*is_server_listening)(const char *) __offset(OFF64|AUTO);
int (*wait_for_incoming_data)(RpcConnection *) __offset(OFF64|AUTO);
size_t (*get_top_of_tower)(unsigned __int8 *, const char *, const char *) __offset(OFF64|AUTO);
RPC_STATUS (*parse_top_of_tower)(const unsigned __int8 *, size_t, char **, char **) __offset(OFF64|AUTO);
RPC_STATUS (*receive_fragment)(RpcConnection *, RpcPktHdr **, void **) __offset(OFF64|AUTO);
BOOL (*is_authorized)(RpcConnection *) __offset(OFF64|AUTO);
RPC_STATUS (*authorize)(RpcConnection *, BOOL, unsigned __int8 *, unsigned int, unsigned __int8 *, unsigned int *) __offset(OFF64|AUTO);
RPC_STATUS (*secure_packet)(RpcConnection *, secure_packet_direction, RpcPktHdr *, unsigned int, unsigned __int8 *, unsigned int, RpcAuthVerifier *, unsigned __int8 *, unsigned int) __offset(OFF64|AUTO);
RPC_STATUS (*impersonate_client)(RpcConnection *) __offset(OFF64|AUTO);
RPC_STATUS (*revert_to_self)(RpcConnection *) __offset(OFF64|AUTO);
RPC_STATUS (*inquire_auth_client)(RpcConnection *, RPC_AUTHZ_HANDLE *, RPC_WSTR *, ULONG *, ULONG *, ULONG *, ULONG) __offset(OFF64|AUTO);
};
