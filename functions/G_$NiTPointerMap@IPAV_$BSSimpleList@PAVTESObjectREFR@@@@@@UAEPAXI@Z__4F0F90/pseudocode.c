unsigned int *__thiscall NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
