struct enum_stat_prop_stg
{
IEnumSTATPROPSTG_0 IEnumSTATPROPSTG_iface;
LONG refcount;
PropertyStorage_impl *storage;
STATPROPSTG *stats;
size_t current;
size_t count;
};
