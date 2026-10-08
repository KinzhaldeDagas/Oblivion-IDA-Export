struct threadpool_instance
{
threadpool_object *object __offset(OFF64|AUTO);
DWORD threadid;
BOOL associated;
BOOL may_run_long;
$A8DA9B2DCEAA11DF2E5BBF7494BD63FD cleanup;
};
