struct __declspec(align(8)) module_iterator
{
HANDLE process __offset(OFF64|AUTO);
LIST_ENTRY *head __offset(OFF64|AUTO);
LIST_ENTRY *current __offset(OFF64|AUTO);
BOOL wow64;
LDR_DATA_TABLE_ENTRY ldr_module;
LDR_DATA_TABLE_ENTRY32 ldr_module32;
};
