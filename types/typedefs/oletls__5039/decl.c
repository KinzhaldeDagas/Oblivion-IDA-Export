struct oletls
{
apartment *apt;
IErrorInfo_0 *errorinfo;
DWORD thread_seqid;
DWORD flags;
void *unknown0;
DWORD inits;
DWORD ole_inits;
GUID causality_id;
LONG pending_call_count_client;
LONG pending_call_count_server;
DWORD unknown;
IObjContext_0 *context_token;
IUnknown_0 *call_state;
DWORD unknown2[46];
IUnknown_0 *cancel_object;
IUnknown_0 *state;
list spies;
DWORD spies_lock;
DWORD cancelcount;
};
