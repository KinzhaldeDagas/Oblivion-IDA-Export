struct __declspec(align(8)) _RpcContextHandle
{
list entry;
void *user_context;
NDR_RUNDOWN rundown_routine;
void *ctx_guard;
UUID uuid;
CRITICAL_SECTION lock;
unsigned int refs;
};
