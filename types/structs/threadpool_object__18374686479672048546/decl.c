struct threadpool_object
{
void *win32_callback;
LONG refcount;
BOOL shutdown;
threadpool_objtype type;
threadpool *pool;
threadpool_group *group;
PVOID userdata;
PTP_CLEANUP_GROUP_CANCEL_CALLBACK group_cancel_callback;
PTP_SIMPLE_CALLBACK finalization_callback;
BOOL may_run_long;
HMODULE race_dll;
TP_CALLBACK_PRIORITY priority;
list group_entry;
BOOL is_group_member;
list pool_entry;
RTL_CONDITION_VARIABLE finished_event;
RTL_CONDITION_VARIABLE group_finished_event;
HANDLE completed_event;
LONG num_pending_callbacks;
LONG num_running_callbacks;
LONG num_associated_callbacks;
$769A967339D274836F7FAABDD7ECEEC5 u;
};
