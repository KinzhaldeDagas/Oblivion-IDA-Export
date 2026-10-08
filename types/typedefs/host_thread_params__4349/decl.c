struct host_thread_params
{
COINIT threading_model;
HANDLE ready_event __offset(OFF64|AUTO);
HWND apartment_hwnd __offset(OFF64|AUTO);
};
