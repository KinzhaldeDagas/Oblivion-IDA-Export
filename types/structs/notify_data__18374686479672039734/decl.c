struct notify_data
{
SC_HANDLE service;
SC_RPC_NOTIFY_PARAMS params;
SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2 cparams;
SC_NOTIFY_RPC_HANDLE notify_handle;
SERVICE_NOTIFYW *notify_buffer;
HANDLE calling_thread;
HANDLE ready_evt;
list entry;
};
