unsigned int *__thiscall NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
