struct __declspec(align(4)) nsiproxy_get_parameter
{
NPI_MODULEID module;
DWORD first_arg;
DWORD table;
DWORD key_size;
DWORD param_type;
DWORD data_offset;
BYTE key[1];
};
