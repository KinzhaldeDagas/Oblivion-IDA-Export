struct promptdisk_params
{
PCWSTR DialogTitle __offset(OFF64|AUTO);
PCWSTR DiskName __offset(OFF64|AUTO);
PCWSTR PathToSource __offset(OFF64|AUTO);
PCWSTR FileSought __offset(OFF64|AUTO);
PCWSTR TagFile __offset(OFF64|AUTO);
DWORD DiskPromptStyle;
PWSTR PathBuffer __offset(OFF64|AUTO);
DWORD PathBufferSize;
PDWORD PathRequiredSize __offset(OFF64|AUTO);
};
