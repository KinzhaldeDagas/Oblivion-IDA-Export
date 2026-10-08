struct threadpool_group
{
LONG refcount;
BOOL shutdown;
CRITICAL_SECTION cs;
list members;
};
