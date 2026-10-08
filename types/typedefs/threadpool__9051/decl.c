struct threadpool
{
LONG refcount;
LONG objcount;
BOOL shutdown;
CRITICAL_SECTION cs;
list pools[3];
RTL_CONDITION_VARIABLE update_event;
int max_workers;
int min_workers;
int num_workers;
int num_busy_workers;
HANDLE compl_port;
TP_POOL_STACK_INFORMATION stack_info;
};
