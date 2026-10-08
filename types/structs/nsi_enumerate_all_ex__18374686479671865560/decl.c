struct nsi_enumerate_all_ex
{
void *unknown[2] __offset(OFF64|AUTO);
const NPI_MODULEID *module __offset(OFF64|AUTO);
DWORD_PTR table;
DWORD first_arg;
DWORD second_arg;
void *key_data __offset(OFF64|AUTO);
DWORD key_size;
void *rw_data __offset(OFF64|AUTO);
DWORD rw_size;
void *dynamic_data __offset(OFF64|AUTO);
DWORD dynamic_size;
void *static_data __offset(OFF64|AUTO);
DWORD static_size;
__declspec(align(8)) DWORD_PTR count;
};
