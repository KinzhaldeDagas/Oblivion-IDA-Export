struct apartment_loaded_dll
{
list entry;
opendll *dll;
DWORD unload_time;
BOOL multi_threaded;
};
