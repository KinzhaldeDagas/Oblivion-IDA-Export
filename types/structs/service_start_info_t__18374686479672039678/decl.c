struct __declspec(align(4)) service_start_info_t
{
DWORD magic;
DWORD total_size;
DWORD name_size;
DWORD control;
BYTE data[1];
};
