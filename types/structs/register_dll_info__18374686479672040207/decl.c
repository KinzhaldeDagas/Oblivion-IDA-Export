struct register_dll_info
{
PSP_FILE_CALLBACK_W callback;
PVOID callback_context;
BOOL unregister;
int modules_size;
int modules_count;
HMODULE *modules;
};
