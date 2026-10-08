struct nsi_get_parameter_ex
{
void *unknown[2] __offset(OFF64|AUTO);
const NPI_MODULEID *module __offset(OFF64|AUTO);
DWORD_PTR table;
DWORD first_arg;
DWORD unknown2;
const void *key __offset(OFF64|AUTO);
DWORD key_size;
__declspec(align(8)) DWORD_PTR param_type;
void *data __offset(OFF64|AUTO);
DWORD data_size;
DWORD data_offset;
};
