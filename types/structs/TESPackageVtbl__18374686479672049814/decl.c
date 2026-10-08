struct TESPackageVtbl
{
TESFormVtbl super;
unsigned __int16 (__thiscall *GetSaveSize)(TESPackage *self);
void (__thiscall *SaveGame)(TESPackage *self);
void (__thiscall *LoadGame)(TESPackage *self);
void (__thiscall *InitLoadGame)(TESPackage *self);
};
