unsigned int *__thiscall NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>(this); /*0x4f0f93*/
  if ( (a2 & 1) != 0 ) /*0x4f0f9d*/
    FormHeapFree((unsigned int)this); /*0x4f0fa0*/
  return this; /*0x4f0faa*/
}
