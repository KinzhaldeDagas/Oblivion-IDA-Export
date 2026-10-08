struct comclassredirect_data
{
ULONG size;
ULONG flags;
DWORD model;
GUID clsid;
GUID alias;
GUID clsid2;
GUID tlbid;
ULONG name_len;
ULONG name_offset;
ULONG progid_len;
ULONG progid_offset;
ULONG clrdata_len;
ULONG clrdata_offset;
DWORD miscstatus;
DWORD miscstatuscontent;
DWORD miscstatusthumbnail;
DWORD miscstatusicon;
DWORD miscstatusdocprint;
};
