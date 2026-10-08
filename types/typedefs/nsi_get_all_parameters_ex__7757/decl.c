struct __declspec(align(8)) nsi_get_all_parameters_ex
{
void *unknown[2];
const NPI_MODULEID *module;
DWORD_PTR table;
DWORD first_arg;
DWORD unknown2;
const void *key;
DWORD key_size;
void *rw_data;
DWORD rw_size;
void *dynamic_data;
DWORD dynamic_size;
void *static_data;
DWORD static_size;
};
