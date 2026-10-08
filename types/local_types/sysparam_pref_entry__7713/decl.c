struct sysparam_pref_entry
{
sysparam_entry hdr;
sysparam_binary_entry *parent __offset(OFF64|AUTO);
UINT offset;
UINT mask;
};
