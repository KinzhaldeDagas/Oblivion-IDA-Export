struct TESModelVtbl
{
BaseFormComponentVtbl super;
void (__thiscall *Destroy)(TESModel *);
const char *(__thiscall *GetModelPath)(TESModel *);
void (__thiscall *SetModelPath)(TESModel *, const char *path);
};
