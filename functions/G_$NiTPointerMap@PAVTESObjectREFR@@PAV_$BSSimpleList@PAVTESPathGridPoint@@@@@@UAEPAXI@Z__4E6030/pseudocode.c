unsigned int *__thiscall NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>(this); /*0x4e6033*/
  if ( (a2 & 1) != 0 ) /*0x4e603d*/
    FormHeapFree((unsigned int)this); /*0x4e6040*/
  return this; /*0x4e604a*/
}
