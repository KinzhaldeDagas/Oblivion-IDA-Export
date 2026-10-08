struct _wine_modref
{
LDR_DATA_TABLE_ENTRY_0 ldr;
file_id id;
int alloc_deps;
int nDeps;
_wine_modref **deps;
};
