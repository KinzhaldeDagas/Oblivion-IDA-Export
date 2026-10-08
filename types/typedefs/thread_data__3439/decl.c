struct thread_data
{
LPTHREAD_START_ROUTINE thread_proc __offset(OFF64|AUTO);
LPTHREAD_START_ROUTINE callback __offset(OFF64|AUTO);
void *data __offset(OFF64|AUTO);
DWORD flags;
HANDLE hEvent __offset(OFF64|AUTO);
IUnknown_0 *thread_ref __offset(OFF64|AUTO);
IUnknown_0 *process_ref __offset(OFF64|AUTO);
};
