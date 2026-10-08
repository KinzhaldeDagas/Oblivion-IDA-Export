struct __declspec(align(4)) nsiproxy_get_all_parameters
{
NPI_MODULEID module;
DWORD first_arg;
DWORD table;
DWORD key_size;
DWORD rw_size;
DWORD dynamic_size;
DWORD static_size;
BYTE key[1];
};
