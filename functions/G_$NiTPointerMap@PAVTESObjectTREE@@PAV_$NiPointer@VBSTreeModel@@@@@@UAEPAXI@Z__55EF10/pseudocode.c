unsigned int *__thiscall NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::~NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
