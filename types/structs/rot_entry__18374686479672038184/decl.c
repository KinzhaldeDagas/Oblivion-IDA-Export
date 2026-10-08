struct rot_entry
{
list entry;
InterfaceData *object;
MonikerComparisonData *moniker_data;
DWORD cookie;
FILETIME last_modified;
IrotContextHandle ctxt_handle;
};
