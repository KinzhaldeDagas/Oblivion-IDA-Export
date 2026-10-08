struct __declspec(align(8)) service_data
{
LPHANDLER_FUNCTION_EX handler;
void *context;
HANDLE thread;
SC_HANDLE handle;
SC_HANDLE full_access_handle;
unsigned __int32 unicode : 1;
$9509DAE5C37AFA1726EC3F4461833BBE proc;
WCHAR_0 *args;
WCHAR_0 name[1];
};
