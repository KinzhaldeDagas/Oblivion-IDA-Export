struct DataCacheEntry
{
list entry;
FORMATETC fmtetc;
STGMEDIUM_0 stgmedium;
DWORD id;
BOOL dirty;
int load_stream_num;
int save_stream_num;
DWORD sink_id;
DWORD advise_flags;
};
