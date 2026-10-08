struct TESDescriptionVtbl
{
BaseFormComponentVtbl super;
const char *(__thiscall *GetText)(TESDescription *This, TESForm *parentForm, UInt32 recordCode);
};
