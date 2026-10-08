struct sysparam_binary_entry
{
sysparam_entry hdr;
void *ptr __offset(OFF64|AUTO);
size_t size;
};
