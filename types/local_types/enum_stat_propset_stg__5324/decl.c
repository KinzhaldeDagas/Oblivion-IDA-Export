struct enum_stat_propset_stg
{
IEnumSTATPROPSETSTG_0 IEnumSTATPROPSETSTG_iface;
LONG refcount;
STATPROPSETSTG *stats;
size_t current;
size_t count;
};
